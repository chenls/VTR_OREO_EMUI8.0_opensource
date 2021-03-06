#ifndef _GP_OPS_H_
#define _GP_OPS_H_

extern struct ion_client *drm_ion_client;
int tc_user_param_valid(TC_NS_ClientContext *client_context, int n);
#ifdef SECURITY_AUTH_ENHANCE
int tc_client_call(TC_NS_ClientContext *client_context,
		   TC_NS_DEV_File *dev_file, uint8_t flags, TC_NS_Token *tc_ns_token);
#else
int tc_client_call(TC_NS_ClientContext *context, TC_NS_DEV_File *dev_file,
		   uint8_t flags);
#endif
#endif
