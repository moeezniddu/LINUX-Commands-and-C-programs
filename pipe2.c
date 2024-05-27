#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int fd = open("newpipe", O_RDONLY);
	char c;

	while(read(fd, &c, 1))
	{
		printf("%c", c);
	}
	close(fd);
}
