#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void main()
{
	printf("Hello There\n");

	kill(getpid(), 9);

	printf("After Kill");
}
