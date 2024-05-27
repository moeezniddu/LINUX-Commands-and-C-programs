#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int fd[2];
	char string[20];
	int pid;

	pipe(fd);
	pid = fork();

	if(pid == 0)
	{
		close(fd[0]);
		write(fd[1], "Hello", 5);
	}

	else
	{
		close(fd[1]);
		read(fd[0], string, 5);
		printf("String send by the child is %s\n", string);
	}
}
