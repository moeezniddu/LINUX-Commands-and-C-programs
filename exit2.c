#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void fn1();
void fn2();
void fn3();
void fn4();


void main()
{
	printf("Starting Main...\n");
	atexit(fn1);
        atexit(fn2);
        atexit(fn3);
        atexit(fn4);

	printf("Ending Main...\n");
}

void fn1()
{
	printf("Running End logic here for 1\n");
//	printf("Gaarbdege Collection, file deallocation etc\n");
}

void fn2()
{
        printf("Running End logic here for 2\n");
//      printf("Gaarbdege Collection, file deallocation etc\n");
}

void fn3()
{
        printf("Running End logic here for 3\n");
//      printf("Gaarbdege Collection, file deallocation etc\n");
}

void fn4()
{
        printf("Running End logic here for 4\n");
//      printf("Gaarbdege Collection, file deallocation etc\n");
}

