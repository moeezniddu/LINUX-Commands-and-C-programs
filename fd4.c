#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char *msg = "Hello";
    
    int fd = open("myfile", O_CREAT|O_WRONLY|O_APPEND, 0666);
    
    size_t lenght = strlen(msg);
    
    write(fd, msg, lenght);
    
    close(fd);
}

