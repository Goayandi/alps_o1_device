// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __renderControl_client_base_t_h
#define __renderControl_client_base_t_h

#include "renderControl_client_proc.h"


struct renderControl_client_base_t {

	rcGetRendererVersion_client_proc_t rcGetRendererVersion;
	rcGetEGLVersion_client_proc_t rcGetEGLVersion;
	rcQueryEGLString_client_proc_t rcQueryEGLString;
	rcGetGLString_client_proc_t rcGetGLString;
	rcGetNumConfigs_client_proc_t rcGetNumConfigs;
	rcGetConfigs_client_proc_t rcGetConfigs;
	rcChooseConfig_client_proc_t rcChooseConfig;
	rcGetFBParam_client_proc_t rcGetFBParam;
	rcCreateContext_client_proc_t rcCreateContext;
	rcDestroyContext_client_proc_t rcDestroyContext;
	rcCreateWindowSurface_client_proc_t rcCreateWindowSurface;
	rcDestroyWindowSurface_client_proc_t rcDestroyWindowSurface;
	rcCreateColorBuffer_client_proc_t rcCreateColorBuffer;
	rcOpenColorBuffer_client_proc_t rcOpenColorBuffer;
	rcCloseColorBuffer_client_proc_t rcCloseColorBuffer;
	rcSetWindowColorBuffer_client_proc_t rcSetWindowColorBuffer;
	rcFlushWindowColorBuffer_client_proc_t rcFlushWindowColorBuffer;
	rcMakeCurrent_client_proc_t rcMakeCurrent;
	rcFBPost_client_proc_t rcFBPost;
	rcFBSetSwapInterval_client_proc_t rcFBSetSwapInterval;
	rcBindTexture_client_proc_t rcBindTexture;
	rcBindRenderbuffer_client_proc_t rcBindRenderbuffer;
	rcColorBufferCacheFlush_client_proc_t rcColorBufferCacheFlush;
	rcReadColorBuffer_client_proc_t rcReadColorBuffer;
	rcUpdateColorBuffer_client_proc_t rcUpdateColorBuffer;
	rcOpenColorBuffer2_client_proc_t rcOpenColorBuffer2;
	rcCreateClientImage_client_proc_t rcCreateClientImage;
	rcDestroyClientImage_client_proc_t rcDestroyClientImage;
};

#endif
