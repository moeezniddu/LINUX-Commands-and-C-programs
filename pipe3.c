#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
//#include<sys/wait.h>
//#include<errno.h>

int main()
{
	int fd[2];
	
	if(pipe(fd) == -1)
	{
		printf("Error....\n");
		return 1;
	}
	
	int id = fork();
	
	if(id == 0)
	{
		close(fd[0]);
		int num;
		printf("Enter a Number\n");
		scanf("%d", &num);
		write(fd[1], &num, sizeof(int));
		close(fd[1]);
	}
	else
	{
		int x;
		close(fd[1]);
		read(fd[0], &x, sizeof(int));
		close(fd[0]);
		printf("The pipe contains %d\n", x);
	}
}
