#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message(void *ptr)
{
	char *message;
	message = (char *)ptr;
	printf("%s \n", message);
	return NULL;
}

int main()
{
	pthread_t thread1, thread2;

	char *message1 = "Thread 1";
	char *message2 = "Thread 2";
	
	int return_value1, return_value2;

	return_value1 = pthread_create(&thread1, NULL, print_message, (void *)message1);
	return_value2 = pthread_create(&thread2, NULL, print_message, (void *)message2);

	pthread_join(thread1, NULL );
	pthread_join(thread2, NULL );

	exit(0);
}
