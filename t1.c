#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void *routine()
{
	printf("Calling thread function...\n");
	printf("Thread PID is %d\n", getpid());
}

int main()
{
	printf("Application PID is %d\n", getpid());
	pthread_t t1;
	pthread_create(&t1, NULL, routine, NULL);

	pthread_join(t1, NULL);
	
	return 0;
	
}
