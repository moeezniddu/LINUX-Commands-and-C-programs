#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* loop()
{
	long a = 10;
	for (long i = 1; i<= 1000000000; i ++)
	{
		a = a + i;
	}
}

void main()
{

//	loop();
//	loop();


	pthread_t t1, t2;
	
	pthread_create(&t1, NULL, loop, NULL);
	pthread_create(&t2, NULL, loop, NULL);

	pthread_join(t1, NULL);	
	pthread_join(t2, NULL);

}

