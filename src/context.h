#ifndef _CONTEX_H_
#define _CONTEX_H_

#include <glib.h>

#define DEFAULT_CFG_FILE "/etc/cpds/agent/config.json"
#define DEFAULT_LOG_CFG_FILE "/etc/cpds/agent/log.conf"
#define DEFAULT_EXPOSE_PORT 20001

typedef struct _agent_context {
	gboolean show_version;
	gchar *config_file;
	gchar *log_cfg_file;
	gint expose_port;
} agent_context;

// 全局上下文
extern agent_context global_ctx;

void free_global_context();

#endif
