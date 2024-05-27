#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int a;
	printf("Enter a number smaller then 10\n");
	scanf("%d", &a);
	if(a > 10)
	{
		printf("Enter a number small then 10 not greater\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("You entered %d\n", a);
		exit(EXIT_SUCCESS);
	//	printf("After Return");
	}
}
