#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void fn1();
void fn2();
void fn3();
void fn4();

void main()
{
	printf("Normal Flow\n\n");
	
	atexit(fn1);
	atexit(fn2);
	atexit(fn3);
	atexit(fn4);

	printf("After Exit\n\n");
	abort();
}

void fn1()
{
	printf("Running Function 1\n");
}

void fn2()
{
	printf("Running Function 2\n");
}

void fn3()
{
	printf("Running Function 3\n");
}

void fn4()
{
	printf("Running Function 4\n");
}
