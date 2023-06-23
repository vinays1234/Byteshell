#include "headers.h"


int echo_func(char **argv)
{
  if (argv[1] == NULL)
   {
    printf("\n");
  } 
  else
  {
   int argc = 1;
  
   while(argv[argc]!=NULL)
   {  
     if(argv[argc+1]==NULL)
     {
      printf("%s\n",argv[argc]);
      return 1;
     }
      printf("%s",argv[argc]);
      printf(" ");
      argc++;
   }
  
  }
  return 1;
}


int exit_func(char **argv)
{
  return 0;
}

int touch_func(char **argv)
{
  if (argv[1] == NULL)
   {
    printf("touch: missing file operand\n");
    
   } 
  else 
   {
    FILE *file = fopen(argv[1], "w");
     
    if (file == NULL)
     {
        printf("Error in creating a file\n");   
     }
    fclose(file);
   }
  return 1;
}

int mkdir_func(char **argv)
{
   if (argv[1] == NULL) 
   {
       printf("mkdir: missing file operand\n");
   } 
  else 
  {
    int val = mkdir(argv[1], 0777); 
    if(val!=0) 
    {
        printf("Error in creating a directory\n");
    }
  }
  return 1;
}


