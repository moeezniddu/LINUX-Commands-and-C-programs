#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int pid = getpid();
	int ppid = getppid();	
	
	printf("PID -> %6d PPID -> %6d\n", pid, ppid);

	fork();
	
	printf("PID -> %6d \nPPID -> %6d\n", pid, ppid);

}
