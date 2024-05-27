#include <unistd.h>
#include <stdio.h> // See Question 2
int main()
{
	int p;
	p = fork();
	printf("Job Done\n");
	printf("%d \n", p);
}
