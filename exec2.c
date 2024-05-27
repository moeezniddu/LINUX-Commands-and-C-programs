#include<stdio.h>
#include<unistd.h>

void main()
{
	char *arg[] = {"ls", "-al", NULL};
	
	printf("This is main program\n");
	
	execv("/bin/ls", arg);
	
	printf("After main program\n");
}

