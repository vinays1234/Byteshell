# Byteshell
A simple shell used to execute built-in Linux command.
## Project was completed using
- C language
- Shell
## General Requirement for project
- All files will be compiled on Ubuntu using gcc.
- Download the Zip file and go to the directory in Ubuntu where dowloaded folder is there by using "cd" command then  compile and execute it
### How **Byteshell** works
* Prints a prompt and waits for a command from the user
* Creates a child process in which the command is checked
* Checks for built-ins,and local executable programs
* The child process is replaced by the command, which accepts arguments
* When the command is done, the program returns to the parent process and prints the prompt
* The program is ready to receive a new command
* To exit: enter "exit" 
### Compilation

`gcc *.c`
### Execution

`./a.out`

## Builtins implemented

- mkdir
- rmdir
- head
- pwd
- echo
- rm
- touch
- exit

echo : prints back the string taken as input
```
> echo hi guys
hi guys

```
touch : creates a new file
```
> touch arrays.c

```
rm : removes the file taken as input
```
> rm arrays.c

```
mkdir : creates a new directory 
```
> mkdir cdirectry

```
rmdir: removes the directory
```
> rmdir cdirectry
```
exit : exits the shell
```
> exit
```
pwd: prints the current working directory
```
> pwd
```
head: prints the first 10 lines from the file specified
```
> head main.c
#include "headers.h"


int main()
{

  shell_loop();

  return 0;
}
>
```
