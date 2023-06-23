#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>



int echo_func(char **argv);
int exit_func(char **argv);
int touch_func(char **argv);
int mkdir_func(char **argv);
int rm_func(char **argv);
int rmdir_func(char **argv);
int pwd_func(char **argv);
int head_func(char **argv);
int execute(char **argv);
int launch(char **argv);
char **parse_line(char *line);
void shell_loop(void);