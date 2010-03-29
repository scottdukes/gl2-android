package com.badlogic.gdx;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import java.nio.IntBuffer;
import java.nio.ShortBuffer;

import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLContext;
import javax.microedition.khronos.egl.EGLDisplay;
import javax.microedition.khronos.opengles.GL10;

import com.badlogic.gdx.backends.android.AndroidGL20;
import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView;
import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView20;
import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView.Renderer;
import com.badlogic.gdx.graphics.GL20;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;

public class GL2Test extends Activity 
{
	GLSurfaceView view;
	
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);       
        
        if( checkGL20Support( this ) )
        	view = new GLSurfaceView20( this );
        else
        	view = new GLSurfaceView( this );
        
        view.setRenderer( new TestRenderer() );        
        setContentView(view);
    }
    
    protected void onPause( )
    {
    	super.onPause();
    	view.onPause();
    }
    
    protected void onResume( )
    {
    	super.onResume();
    	view.onResume();
    }
    
    private boolean checkGL20Support( Context context )
    {
    	EGL10 egl = (EGL10) EGLContext.getEGL();       
        EGLDisplay display = egl.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);

        int[] version = new int[2];
        egl.eglInitialize(display, version);

        int EGL_OPENGL_ES2_BIT = 4;
        int[] configAttribs =
        {
            EGL10.EGL_RED_SIZE, 4,
            EGL10.EGL_GREEN_SIZE, 4,
            EGL10.EGL_BLUE_SIZE, 4,
            EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
            EGL10.EGL_NONE
        };
        
        EGLConfig[] configs = new EGLConfig[10];
        int[] num_config = new int[1];
        egl.eglChooseConfig(display, configAttribs, configs, 10, num_config);     
        egl.eglTerminate(display);
        return num_config[0] > 0;
    }  
    
    class TestRenderer implements Renderer
    {
    	AndroidGL20 gl2 = new AndroidGL20();
    	FloatBuffer vertices;
    	ShortBuffer indices;
    	int program;
    	int vboVertexHandle;
    	int vboIndexHandle;
    	int viewportWidth, viewportHeight;

		@Override
		public void onDrawFrame(GL10 gl) 
		{		
			gl2.glClearColor( 0.7f, 0.7f, 0.7f, 1 );
			gl2.glClear( GL20.GL_COLOR_BUFFER_BIT );
	 
			gl2.glViewport ( 0, 0, viewportWidth, viewportHeight  );					
			gl2.glUseProgram ( program );
			 
			gl2.glEnableVertexAttribArray ( 0 );
			gl2.glBindBuffer( GL20.GL_ARRAY_BUFFER, vboVertexHandle );
			gl2.glVertexAttribPointer ( 0, 3, GL20.GL_FLOAT, false, 0, 0 );			
			
			gl2.glBindBuffer( GL20.GL_ELEMENT_ARRAY_BUFFER, vboIndexHandle );
			gl2.glDrawElements( GL20.GL_TRIANGLES, 3, GL20.GL_UNSIGNED_SHORT, 0 );
			gl2.glFinish();
		}

		@Override
		public void onSurfaceChanged(GL10 gl, int width, int height) 
		{		
			viewportWidth = width;
			viewportHeight = height;
		}

		@Override
		public void onSurfaceCreated(GL10 gl, EGLConfig config) 
		{			
			String vertexShaderSrc =  "attribute vec4 vPosition;    \n" + 
									  "void main()                  \n" +
									  "{                            \n" +
									  "   gl_Position = vPosition;  \n" +
									  "}                            \n";
			String fragmentShaderSrc = "precision mediump float;\n" +
		      						   "void main()                                  \n" +
		      						   "{                                            \n" +
		      						   "  gl_FragColor = vec4 ( 1.0, 0.0, 0.0, 1.0 );\n" +
		      						   "}                                            \n";
			
			int vertexShader = loadShader( GL20.GL_VERTEX_SHADER, vertexShaderSrc );
			int fragmentShader = loadShader( GL20.GL_FRAGMENT_SHADER, fragmentShaderSrc );			
			program = createProgram( vertexShader, fragmentShader );
			
			float vVertices[] = {  0.0f,  0.5f, 0.0f, 
                       			   -0.5f, -0.5f, 0.0f,
                       			   0.5f, -0.5f, 0.0f };	
			
			ByteBuffer tmp = ByteBuffer.allocateDirect( 3 * 3 * 4 );
			tmp.order(ByteOrder.nativeOrder());
			vertices = tmp.asFloatBuffer();
			vertices.put( vVertices );
			vertices.position(0);
			
			tmp = ByteBuffer.allocateDirect( 4 );
			tmp.order(ByteOrder.nativeOrder());			
			IntBuffer intbuf = tmp.asIntBuffer();
			intbuf.position(0);
			gl2.glGenBuffers( 1, intbuf );
			vboVertexHandle = intbuf.get(0);
			
			gl2.glBindBuffer( GL20.GL_ARRAY_BUFFER, vboVertexHandle );
			gl2.glBufferData( GL20.GL_ARRAY_BUFFER, 3 * 3 * 4, vertices, GL20.GL_STATIC_DRAW  );
			gl2.glBindBuffer( GL20.GL_ARRAY_BUFFER, 0 );
			
			short vIndices[] = { 0, 1, 2 };
			tmp = ByteBuffer.allocateDirect( 3 * 2 );
			tmp.order(ByteOrder.nativeOrder());
			indices = tmp.asShortBuffer();
			indices.put( vIndices );
			indices.position(0);
			
			intbuf.position(0);
			gl2.glGenBuffers( 1, intbuf );
			vboIndexHandle = intbuf.get(0);
			
			gl2.glBindBuffer( GL20.GL_ELEMENT_ARRAY_BUFFER, vboIndexHandle );
			gl2.glBufferData( GL20.GL_ELEMENT_ARRAY_BUFFER, 3 * 2, indices, GL20.GL_STATIC_DRAW );
			gl2.glBindBuffer( GL20.GL_ELEMENT_ARRAY_BUFFER, 0 );
				
		}
    	
		private int loadShader( int type, String source )
		{
			ByteBuffer tmp = ByteBuffer.allocateDirect(4);
			tmp.order(ByteOrder.nativeOrder());
			IntBuffer intbuf = tmp.asIntBuffer();
			
			int shader = gl2.glCreateShader( type );
			if( shader == 0 )
				throw new RuntimeException( "creating the shader didn't work" );
			gl2.glShaderSource( shader, source );
			gl2.glCompileShader( shader );
			gl2.glGetShaderiv( shader, GL20.GL_COMPILE_STATUS, intbuf );
			int compiled = intbuf.get(0);
			if( compiled == 0 )
			{					
				gl2.glGetShaderiv( shader, GL20.GL_INFO_LOG_LENGTH, intbuf );
				int infoLogLength = intbuf.get(0);
				if( infoLogLength > 1 )
				{
					String infoLog = gl2.glGetShaderInfoLog( shader );
					Log.d( "GL2", "shader info: " + infoLog );
				}
				throw new RuntimeException( "creating the shader didn't work" );
			}
			
			return shader;
		}
		
		private int createProgram( int vertexShader, int fragmentShader )
		{
			int program = gl2.glCreateProgram();
			if( program == 0 )
				throw new RuntimeException( "creating program didn't work" );
			
			gl2.glAttachShader( program, vertexShader );
			gl2.glAttachShader( program, fragmentShader );
			
			gl2.glBindAttribLocation( program, 0, "vPosition" );
			gl2.glLinkProgram( program );
			
			ByteBuffer tmp = ByteBuffer.allocateDirect(4);
			tmp.order(ByteOrder.nativeOrder());
			IntBuffer intbuf = tmp.asIntBuffer();
			
			gl2.glGetProgramiv( program, GL20.GL_LINK_STATUS, intbuf );
			int linked = intbuf.get(0);
			if( linked == 0 )
			{
				gl2.glGetProgramiv( program, GL20.GL_INFO_LOG_LENGTH, intbuf );
				int infoLogLength = intbuf.get(0);
				if( infoLogLength > 1 )
				{
					Log.d( "GL2", "couldn't link program: " + gl2.glGetProgramInfoLog( program ) );					
				}
				
				throw new RuntimeException( "Creating program didn't work" );
			}
			return program;
		}
    }
}