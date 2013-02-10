/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_jsb.py -c opengl_jsb.ini" on 2013-02-09
* Script version: v0.6
*/
#include "jsb_config.h"
#if JSB_INCLUDE_OPENGL


#ifdef __cplusplus
extern "C" {
#endif
JSBool JSB_glActiveTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glAttachShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBindBuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBindFramebuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBindRenderbuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBindTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBlendColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBlendEquation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBlendEquationSeparate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glBlendFuncSeparate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCheckFramebufferStatus(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glClear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glClearColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glClearDepthf(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glClearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glColorMask(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCompileShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCopyTexImage2D(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCopyTexSubImage2D(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCreateProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCreateShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glCullFace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDeleteProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDeleteShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDepthFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDepthMask(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDepthRangef(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDetachShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDisable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDisableVertexAttribArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glDrawArrays(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glEnable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glEnableVertexAttribArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glFinish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glFlush(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glFramebufferRenderbuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glFramebufferTexture2D(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glFrontFace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glGenerateMipmap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glGetError(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glHint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsBuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsFramebuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsRenderbuffer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsShader(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glIsTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glLineWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glLinkProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glPixelStorei(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glPolygonOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glReleaseShaderCompiler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glRenderbufferStorage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glSampleCoverage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glScissor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilFuncSeparate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilMask(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilMaskSeparate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilOp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glStencilOpSeparate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glTexParameterf(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glTexParameteri(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform1f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform1i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform2f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform2i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform3f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform3i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform4f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUniform4i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glUseProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glValidateProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glVertexAttrib1f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glVertexAttrib2f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glVertexAttrib3f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glVertexAttrib4f(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_glViewport(JSContext *cx, uint32_t argc, jsval *vp);

#ifdef __cplusplus
}
#endif


#endif // JSB_INCLUDE_OPENGL