#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("Hello World\n");
	fork();
	fork();
	fork();
	fork();
	printf("Hello World\n");
}
