#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid = fork();
	
	if(pid == 0) {
		printf("This is child program\n");

		execl("/usr/bin/cat", "random", "/dev/random", NULL);

		printf("After exec program\n");
	}

	printf("This is the Father\n\n");
}


