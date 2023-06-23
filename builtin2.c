#include "headers.h"

int rm_func(char **argv)
{
   if (argv[1] == NULL)
   {
     printf("rm: missing operand\n");
   } 
  else 
  { 
    int val = remove(argv[1]);
    if(val!=0)
    {
       printf("rm: cannot remove '%s': No such file \n",argv[1]);
    }
  }
  return 1;
}

int rmdir_func(char **argv)
{
   if (argv[1] == NULL)
   {
     printf("rmdir: missing operand\n");
   } 

   else 
   { 
     int val = rmdir(argv[1]);
    if(val!=0)
    {
        printf("rmdir: cannot remove '%s': No such directory\n",argv[1]);
    }
   }

  return 1;
}


int pwd_func(char **argv)
{
    char *temp= malloc(500 * sizeof(char));
    if (temp != NULL)
     {
        if (getcwd(temp, 1024) != NULL) 
        {
            printf("%s\n",temp);
        } 
        else 
        {
            printf("Failed to get the current working directory.\n");
        }
       free(temp);
    } 
    else
     {
        printf("Memory allocation error.\n");
     }

   return 1;
}


int head_func(char **argv)
{
    if (argv[1] == NULL)
    {
       printf("head: missing operand\n");
    } 
    else 
    {

           FILE *file = fopen(argv[1], "r");

           if(file == NULL)
           {
            printf("Error in opening the file\n");
           }
           else
           {
             char line[256];
             int count = 0;
             while (fgets(line, 256, file) && count < 10)
              {
              printf("%s", line);
              count++;
              }
           }
    }
  
  return 1;
}