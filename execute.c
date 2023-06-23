#include "headers.h"


char *command_list[] = {
  "echo",
  "exit",
  "touch",
  "mkdir",
  "rm",
  "rmdir",
  "pwd",
  "head",
 
};

int (*command_func_list[]) (char **) = {
  &echo_func,
  &exit_func,
  &touch_func,
  &mkdir_func,
  &rm_func,
  &rmdir_func,
  &pwd_func,
  &head_func,
};

int execute(char **argv)
{
   if (argv[0] == NULL)
    {
    return 1;
    }

   for (int i = 0; i < 8; i++)
    {
      if (strcmp(argv[0], command_list[i]) == 0)
      {
        return (*command_func_list[i])(argv);
      }
    }

  return launch(argv);
}


int launch(char **argv)
{
  pid_t pid;
  int status;

  pid = fork();

  if (pid == 0)
   {
    if (execvp(argv[0], argv) == -1)
     {
       printf("%s: command not found\n",argv[0]);
     }
    exit(1);
  } 

  else if (pid < 0)
   {
    return 1;
   } 

  else
   {
    do
     {
      waitpid(pid, &status, WUNTRACED);
     } while (!WIFEXITED(status) && !WIFSIGNALED(status));
   }

  return 1;
}