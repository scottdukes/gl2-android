package com.badlogic.gdx.backends.android;

import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLContext;
import javax.microedition.khronos.egl.EGLDisplay;
import javax.microedition.khronos.opengles.GL10;

import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView;
import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView20;
import com.badlogic.gdx.backends.android.surfaceview.GLSurfaceView.Renderer;
import com.badlogic.gdx.graphics.GL20;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;

public class GL2Test extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        GLSurfaceView view;
        
        if( checkGL20Support( this ) )
        	view = new GLSurfaceView20( this );
        else
        	view = new GLSurfaceView( this );
        
        view.setRenderer( new Renderer() {

        	GL20 gl2 = new AndroidGL20( );
        	
			@Override
			public void onDrawFrame(GL10 gl) {
				gl.glClearColor( 1, 0, 0, 1 );
				gl.glClear( GL20.GL_COLOR_BUFFER_BIT );
				
			}

			@Override
			public void onSurfaceChanged(GL10 gl, int width, int height) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void onSurfaceCreated(GL10 gl, EGLConfig config) {				
				
			}
        	
        });
        setContentView(view);
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
}