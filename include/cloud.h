#ifndef CLOUD_H
#define CLOUD_H

#define MAX_INPUT 1024

/* Shell functions */
void start_shell(void);
void execute_command(char *command);

/* System information */
void show_system_info(void);
void show_memory_usage(void);
void show_disk_usage(void);

/* Process management */
void show_processes(void);

/* User information */
void show_current_user(void);

/* Utility functions */
void show_help(void);
void clear_screen(void);

#endif
