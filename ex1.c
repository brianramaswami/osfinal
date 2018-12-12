/*
developer: Brian Ramaswami
program name: ex1.c
discription: prints out the arguments
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
 printf("There are %d arguments\n",argc);
 printf("Here is the second: %s\n",argv[1]); 
 return 0;
}
