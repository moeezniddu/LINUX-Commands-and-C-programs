#include <unistd.h>
#include <stdio.h>

int main()
{
    int p;
    char *arg[] = {"/usr/bin/ls", 0};
    p = fork();

    if (p == 0) {
        // Child Process
        printf("Child Process, Running Exec syscall\n");
        execv(arg[0], arg);
        printf("Child Process, After Syscall\n"); // This line will not be reached
    } else {
        // Parent Process
        printf("Parent Process\n");
    }

    return 0;
}

