#include <unistd.h>
#include <stdio.h>

int main()
{
 
/*
    int p;

    char *arg[] = {"/usr/bin/ls", 0};

    printf("Before Running Exec syscall\n");

    execv(arg[0], arg);

    printf("After Syscall\n"); // This line will not be reached
*/

    printf("Before Running Exec syscall\n");

	execle("ls", "-l", NULL);

    printf("After Syscall\n"); // This line will not be reached


}

