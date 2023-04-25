#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>
#include <time.h>
#include <limits.h>
#include <fcntl.h>

#define COMMAND_LENGTH 100
#define MAXIMUM_ARG 70
#define MAXIMUM_ARG_LEN 120
#define MAXIMUM_PATH 20
#define BUFF_SIZE 1024

extern char **environ;

int _strcmp(char *str1, char *str2);
int exe_path(char **args);
int inputs(char *str_input, char **args);
int inbuilts(char **args, int exit_status);
char *global_var(char *env_var);
char *_strdup(char *str);
char *concat_string(char *str_path, char *command);
int print_prompt(const char *prompt, unsigned int str_len);
void free_mem(char *freed);
int getcmd_inputs(char *entry, char **arguments);
int perr_status(int p);
int print_error(char **args, int counter);
int _putchar(char c);
int check_file(char *pathname);
int child_fork(char **args);
void free_memory(char **mem, int heigth);
int _strlen(char *str);
int exec_cmd(char *command);
int main(int argc, char **argv);

#endif
