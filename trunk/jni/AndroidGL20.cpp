#include "AndroidGL20.h"
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glActiveTexture
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glActiveTexture
  (JNIEnv *, jobject, jint texture)
{
	glActiveTexture( texture );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glAttachShader
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glAttachShader
  (JNIEnv *, jobject, jint program, jint shader)
{
	glAttachShader( program, shader );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBindAttribLocation
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBindAttribLocation
  (JNIEnv *, jobject, jint program, jint index, jstring name)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBindBuffer
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBindBuffer
  (JNIEnv *, jobject, jint target, jint buffer)
{
	glBindBuffer( target, buffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBindFramebuffer
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBindFramebuffer
  (JNIEnv *, jobject, jint target, jint framebuffer)
{
	glBindFramebuffer( target, framebuffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBindRenderbuffer
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBindRenderbuffer
  (JNIEnv *, jobject, jint target, jint renderbuffer)
{
	glBindRenderbuffer( target, renderbuffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBindTexture
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBindTexture
  (JNIEnv *, jobject, jint target, jint texture)
{
	glBindTexture( target, texture );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBlendColor
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBlendColor
  (JNIEnv *, jobject, jfloat red, jfloat green, jfloat blue, jfloat alpha)
{
	glBlendColor( red, green, blue, alpha );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBlendEquation
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBlendEquation
  (JNIEnv *, jobject, jint mode)
{
	glBlendEquation( mode );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBlendEquationSeparate
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBlendEquationSeparate
  (JNIEnv *, jobject, jint modeRGB, jint modeAlpha)
{
	glBlendEquationSeparate( modeRGB, modeAlpha );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBlendFunc
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBlendFunc
  (JNIEnv *, jobject, jint sfactor, jint dfactor)
{
	glBlendFunc( sfactor, dfactor );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBlendFuncSeparate
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBlendFuncSeparate
  (JNIEnv *, jobject, jint srcRGB, jint dstRGB, jint srcAlpha, jint dstAlpha)
{
	glBlendFuncSeparate( srcRGB, dstRGB, srcAlpha, dstAlpha);
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBufferData
 * Signature: (IILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBufferData
  (JNIEnv *, jobject, jint target, jint size, jobject data, jint usage)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glBufferSubData
 * Signature: (IIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glBufferSubData
  (JNIEnv *, jobject, jint target, jint offset, jint size, jobject data)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCheckFramebufferStatus
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCheckFramebufferStatus
  (JNIEnv *, jobject, jint target)
{
	return glCheckFramebufferStatus( target );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glClear
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glClear
  (JNIEnv *, jobject, jint mask)
{
	glClear( mask );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glClearColor
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glClearColor
  (JNIEnv *, jobject, jfloat red, jfloat green, jfloat blue, jfloat alpha)
{
	glClearColor( red, green, blue, alpha );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glClearDepthf
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glClearDepthf
  (JNIEnv *, jobject, jfloat depth)
{
	glClearDepthf( depth );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glClearStencil
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glClearStencil
  (JNIEnv *, jobject, jint s)
{
	glClearStencil( s );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glColorMask
 * Signature: (ZZZZ)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glColorMask
  (JNIEnv *, jobject, jboolean red, jboolean green, jboolean blue, jboolean alpha)
{
	glColorMask( red, green, blue, alpha );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCompileShader
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCompileShader
  (JNIEnv *, jobject, jint shader)
{
	glCompileShader( shader );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCompressedTexImage2D
 * Signature: (IIIIIIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCompressedTexImage2D
  (JNIEnv *, jobject, jint target, jint level, jint internalFormat, jint width, jint height, jint border, jint imageSize, jobject data)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCompressedTexSubImage2D
 * Signature: (IIIIIIIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCompressedTexSubImage2D
  (JNIEnv *, jobject, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint imageSize, jobject data)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCopyTexImage2D
 * Signature: (IIIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCopyTexImage2D
  (JNIEnv *, jobject, jint target, jint level, jint  internalFormat, jint x, jint y, jint width, jint height, jint border)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCopyTexSubImage2D
 * Signature: (IIIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCopyTexSubImage2D
  (JNIEnv *, jobject, jint target, jint level, jint xoffset, jint yoffset, jint x, jint y, jint width, jint height)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCreateProgram
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCreateProgram
  (JNIEnv *, jobject)
{
	return glCreateProgram( );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCreateShader
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCreateShader
  (JNIEnv *, jobject, jint type)
{
	return glCreateShader( type );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glCullFace
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glCullFace
  (JNIEnv *, jobject, jint mode)
{
	glCullFace( mode );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteBuffers
  (JNIEnv *, jobject, jint n, jobject buffers)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteFramebuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteFramebuffers
  (JNIEnv *, jobject, jint n, jobject framebuffers)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteProgram
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteProgram
  (JNIEnv *, jobject, jint program)
{
	glDeleteProgram( program );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteRenderbuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteRenderbuffers
  (JNIEnv *, jobject, jint n, jobject renderbuffers)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteShader
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteShader
  (JNIEnv *, jobject, jint shader)
{
	glDeleteShader( shader );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDeleteTextures
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDeleteTextures
  (JNIEnv *, jobject, jint n, jobject textures)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDepthFunc
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDepthFunc
  (JNIEnv *, jobject, jint func)
{
	glDepthFunc( func );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDepthMask
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDepthMask
  (JNIEnv *, jobject, jboolean flag)
{
	glDepthMask( flag );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDepthRangef
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDepthRangef
  (JNIEnv *, jobject, jfloat zNear, jfloat zFar)
{
	glDepthRangef( zNear, zFar );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDetachShader
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDetachShader
  (JNIEnv *, jobject, jint program, jint shader)
{
	glDetachShader( program, shader );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDisable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDisable
  (JNIEnv *, jobject, jint cap)
{
	glDisable( cap );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDisableVertexAttribArray
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDisableVertexAttribArray
  (JNIEnv *, jobject, jint index)
{
	glDisableVertexAttribArray( index );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDrawArrays
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDrawArrays
  (JNIEnv *, jobject, jint mode, jint first, jint count)
{
	glDrawArrays( mode, first, count );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glDrawElements
 * Signature: (IIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glDrawElements
  (JNIEnv *, jobject, jint mode, jint count, jint type, jobject indices)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glEnable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glEnable
  (JNIEnv *, jobject, jint cap)
{
	glEnable( cap );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glEnableVertexAttribArray
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glEnableVertexAttribArray
  (JNIEnv *, jobject, jint index)
{
	glEnableVertexAttribArray( index );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glFinish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glFinish
  (JNIEnv *, jobject)
{
	glFinish();
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glFlush
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glFlush
  (JNIEnv *, jobject)
{
	glFlush();
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glFramebufferRenderbuffer
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glFramebufferRenderbuffer
  (JNIEnv *, jobject, jint target, jint attachment, jint renderbuffertarget, jint renderbuffer)
{
	glFramebufferRenderbuffer( target, attachment, renderbuffertarget, renderbuffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glFramebufferTexture2D
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glFramebufferTexture2D
  (JNIEnv *, jobject, jint target, jint attachment, jint textarget, jint texture, jint level)
{
	glFramebufferTexture2D( target, attachment, textarget, texture, level );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glFrontFace
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glFrontFace
  (JNIEnv *, jobject, jint mode)
{
	glFrontFace( mode );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGenBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGenBuffers
  (JNIEnv *, jobject, jint n, jobject buffers)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGenerateMipmap
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGenerateMipmap
  (JNIEnv *, jobject, jint target)
{
	glGenerateMipmap( target );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGenFramebuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGenFramebuffers
  (JNIEnv *, jobject, jint n, jobject framebuffers)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGenRenderbuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGenRenderbuffers
  (JNIEnv *, jobject, jint n, jobject renderbuffers)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGenTextures
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGenTextures
  (JNIEnv *, jobject, jint n, jobject textures)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetActiveAttrib
 * Signature: (IIILjava/nio/Buffer;Ljava/nio/IntBuffer;Ljava/nio/Buffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetActiveAttrib
  (JNIEnv *, jobject, jint program, jint index, jint bufsize, jobject length, jobject size, jobject type, jstring name)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetActiveUniform
 * Signature: (IIILjava/nio/Buffer;Ljava/nio/IntBuffer;Ljava/nio/Buffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetActiveUniform
  (JNIEnv *, jobject, jint program, jint index, jint bufsize, jobject length, jobject size, jobject type, jstring name)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetAttachedShaders
 * Signature: (IILjava/nio/Buffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetAttachedShaders
  (JNIEnv *, jobject, jint program, jint maxcount, jobject count, jobject shaders)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetAttribLocation
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetAttribLocation
  (JNIEnv *, jobject, jint program, jstring name)
{
	//FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetBooleanv
 * Signature: (ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetBooleanv
  (JNIEnv *, jobject, jint program, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetBufferParameteriv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetBufferParameteriv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetError
  (JNIEnv *, jobject)
{
	return glGetError();
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetFloatv
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetFloatv
  (JNIEnv *, jobject, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetFramebufferAttachmentParameteriv
 * Signature: (IIILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetFramebufferAttachmentParameteriv
  (JNIEnv *, jobject, jint target, jint attachment, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetIntegerv
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetIntegerv
  (JNIEnv *, jobject, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetProgramiv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetProgramiv
  (JNIEnv *, jobject, jint program, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetProgramInfoLog
 * Signature: (IILjava/nio/Buffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetProgramInfoLog
  (JNIEnv *, jobject, jint program, jint bufsize, jobject length, jstring infolog)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetRenderbufferParameteriv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetRenderbufferParameteriv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetShaderiv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetShaderiv
  (JNIEnv *, jobject, jint shader, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetShaderInfoLog
 * Signature: (IILjava/nio/Buffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetShaderInfoLog
  (JNIEnv *, jobject, jint shader, jint bufsize, jobject length, jstring infolog)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetShaderPrecisionFormat
 * Signature: (IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetShaderPrecisionFormat
  (JNIEnv *, jobject, jint shadertype, jint precisiontype, jobject range, jobject precision)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetShaderSource
 * Signature: (IILjava/nio/Buffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetShaderSource
  (JNIEnv *, jobject, jint shader, jint bufsize, jobject length, jstring source)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetString
  (JNIEnv *, jobject, jint name)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetTexParameterfv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetTexParameterfv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{

}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetTexParameteriv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetTexParameteriv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetUniformfv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetUniformfv
  (JNIEnv *, jobject, jint program, jint location, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetUniformiv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetUniformiv
  (JNIEnv *, jobject, jint program, jint location, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetUniformLocation
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetUniformLocation
  (JNIEnv *, jobject, jint program, jstring name)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetVertexAttribfv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetVertexAttribfv
  (JNIEnv *, jobject, jint index, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetVertexAttribiv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetVertexAttribiv
  (JNIEnv *, jobject, jint index, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glGetVertexAttribPointerv
 * Signature: (IILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glGetVertexAttribPointerv
  (JNIEnv *, jobject, jint index, jint pname, jobject pointer)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glHint
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glHint
  (JNIEnv *, jobject, jint target, jint mode)
{
	glHint( target, mode );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsBuffer
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsBuffer
  (JNIEnv *, jobject, jint buffer)
{
	return glIsBuffer( buffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsEnabled
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsEnabled
  (JNIEnv *, jobject, jint cap)
{
	return glIsEnabled( cap );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsFramebuffer
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsFramebuffer
  (JNIEnv *, jobject, jint framebuffer)
{
	return glIsFramebuffer( framebuffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsProgram
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsProgram
  (JNIEnv *, jobject, jint program)
{
	return glIsProgram( program );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsRenderbuffer
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsRenderbuffer
  (JNIEnv *, jobject, jint renderbuffer)
{
	return glIsRenderbuffer( renderbuffer );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsShader
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsShader
  (JNIEnv *, jobject, jint shader)
{
	return glIsShader( shader );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glIsTexture
 * Signature: (I)C
 */
JNIEXPORT jboolean JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glIsTexture
  (JNIEnv *, jobject, jint texture)
{
	return glIsTexture( texture );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glLineWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glLineWidth
  (JNIEnv *, jobject, jfloat width)
{
	glLineWidth( width );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glLinkProgram
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glLinkProgram
  (JNIEnv *, jobject, jint program)
{
	glLinkProgram( program );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glPixelStorei
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glPixelStorei
  (JNIEnv *, jobject, jint pname, jint param)
{
	glPixelStorei( pname, param );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glPolygonOffset
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glPolygonOffset
  (JNIEnv *, jobject, jfloat factor, jfloat units)
{
	glPolygonOffset( factor, units );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glReadPixels
 * Signature: (IIIIIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glReadPixels
  (JNIEnv *, jobject, jint x, jint y, jint width, jint height, jint format, jint type, jobject pixels)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glReleaseShaderCompiler
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glReleaseShaderCompiler
  (JNIEnv *, jobject)
{
	glReleaseShaderCompiler();
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glRenderbufferStorage
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glRenderbufferStorage
  (JNIEnv *, jobject, jint target, jint internalFormat, jint width, jint height)
{
	glRenderbufferStorage( target, internalFormat, width, height );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glSampleCoverage
 * Signature: (FZ)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glSampleCoverage
  (JNIEnv *, jobject, jfloat value, jboolean inver)
{
	glSampleCoverage( value, inver );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glScissor
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glScissor
  (JNIEnv *, jobject, jint x, jint y, jint width, jint height)
{
	glScissor( x, y, width, height );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glShaderBinary
 * Signature: (ILjava/nio/IntBuffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glShaderBinary
  (JNIEnv *, jobject, jint n, jobject shaders, jint binaryformat, jobject binary, jint length)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glShaderSource
 * Signature: (IILjava/lang/String;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glShaderSource
  (JNIEnv *, jobject, jint n, jint count, jstring string, jobject length)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilFunc
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilFunc
  (JNIEnv *, jobject, jint func, jint ref, jint mask)
{
	glStencilFunc( func, ref, mask );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilFuncSeparate
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilFuncSeparate
  (JNIEnv *, jobject, jint face, jint func, jint ref, jint mask)
{
	glStencilFuncSeparate( face, func, ref, mask );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilMask
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilMask
  (JNIEnv *, jobject, jint mask)
{
	glStencilMask( mask );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilMaskSeparate
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilMaskSeparate
  (JNIEnv *, jobject, jint face, jint mask)
{
	glStencilMaskSeparate( face, mask );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilOp
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilOp
  (JNIEnv *, jobject, jint fail, jint zFail, jint zpass)
{
	glStencilOp( fail, zFail, zpass );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glStencilOpSeparate
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glStencilOpSeparate
  (JNIEnv *, jobject, jint face, jint fail, jint zFail, jint zPass)
{
	glStencilOpSeparate( face, fail, zFail, zPass );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexImage2D
 * Signature: (IIIIIIIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexImage2D
  (JNIEnv *, jobject, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jobject pixels)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexParameterf
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexParameterf
  (JNIEnv *, jobject, jint target, jint pname, jfloat param)
{
	glTexParameterf( target, pname, param );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexParameterfv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexParameterfv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexParameteri
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexParameteri
  (JNIEnv *, jobject, jint target, jint pname, jint param)
{
	glTexParameteri( target, pname, param );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexParameteriv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexParameteriv
  (JNIEnv *, jobject, jint target, jint pname, jobject params)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glTexSubImage2D
 * Signature: (IIIIIIIILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glTexSubImage2D
  (JNIEnv *, jobject, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jobject pixels)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform1f
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform1f
  (JNIEnv *, jobject, jint location, jfloat x)
{
	glUniform1f( location, x );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform1fv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform1fv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform1i
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform1i
  (JNIEnv *, jobject, jint location, jint x)
{
	glUniform1i( location, x );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform1iv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform1iv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform2f
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform2f
  (JNIEnv *, jobject, jint location, jfloat x, jfloat y)
{
	glUniform2f( location, x, y );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform2fv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform2fv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform2i
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform2i
  (JNIEnv *, jobject, jint location, jint x, jint y)
{
	glUniform2i( location, x, y );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform2iv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform2iv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform3f
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform3f
  (JNIEnv *, jobject, jint location, jfloat x, jfloat y, jfloat z)
{
	glUniform3f( location, x, y, z );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform3fv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform3fv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform3i
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform3i
  (JNIEnv *, jobject, jint location, jint x, jint y, jint z)
{
	glUniform3i( location, x, y, z );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform3iv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform3iv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform4f
 * Signature: (IFFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform4f
  (JNIEnv *, jobject, jint location, jfloat x, jfloat y, jfloat z, jfloat w)
{
	glUniform4f( location, x, y, z, w );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform4fv
 * Signature: (IILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform4fv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform4i
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform4i
  (JNIEnv *, jobject, jint location, jint x, jint y, jint z, jint w)
{
	glUniform4i( location, x, y, z, w );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniform4iv
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniform4iv
  (JNIEnv *, jobject, jint location, jint count, jobject v)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniformMatrix2fv
 * Signature: (IIZLjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniformMatrix2fv
  (JNIEnv *, jobject, jint location, jint count, jboolean transpose, jobject value)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniformMatrix3fv
 * Signature: (IIZLjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniformMatrix3fv
  (JNIEnv *, jobject, jint location, jint count, jboolean transpose, jobject value)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUniformMatrix4fv
 * Signature: (IIZLjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUniformMatrix4fv
  (JNIEnv *, jobject, jint location, jint count, jboolean transpose, jobject value)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glUseProgram
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glUseProgram
  (JNIEnv *, jobject, jint program)
{
	glUseProgram( program );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glValidateProgram
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glValidateProgram
  (JNIEnv *, jobject, jint program)
{
	glValidateProgram( program );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib1f
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib1f
  (JNIEnv *, jobject, jint indx, jfloat x)
{
	glVertexAttrib1f( indx, x );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib1fv
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib1fv
  (JNIEnv *, jobject, jint indx, jobject values)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib2f
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib2f
  (JNIEnv *, jobject, jint indx, jfloat x, jfloat y)
{
	glVertexAttrib2f( indx, x, y );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib2fv
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib2fv
  (JNIEnv *, jobject, jint indx, jobject values)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib3f
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib3f
  (JNIEnv *, jobject, jint indx, jfloat x, jfloat y, jfloat z)
{
	glVertexAttrib3f( indx, x, y, z );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib3fv
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib3fv
  (JNIEnv *, jobject, jint indx, jobject values)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib4f
 * Signature: (IFFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib4f
  (JNIEnv *, jobject, jint indx, jfloat x, jfloat y, jfloat z, jfloat w)
{
	glVertexAttrib4f( indx, x, y, z, w );
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttrib4fv
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttrib4fv
  (JNIEnv *, jobject, jint indx, jobject values)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glVertexAttribPointer
 * Signature: (IIIZILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glVertexAttribPointer
  (JNIEnv *, jobject, jint indx, jint size, jint type, jboolean normalized, jint stride, jobject ptr)
{
	// FIXME
}

/*
 * Class:     com_badlogic_gdx_backends_android_AndroidGL20
 * Method:    glViewport
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_backends_android_AndroidGL20_glViewport
  (JNIEnv *, jobject, jint x, jint y, jint width, jint height)
{
	glViewport( x, y, width, height );
}
