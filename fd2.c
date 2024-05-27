#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>

int main()
{
    int fd = open("newfile", O_CREAT | O_WRONLY | O_EXCL | O_APPEND, 0666);
    
    if(fd == -1)
    {
        printf("Can not openfile\n");
        return 1;
    }
    else
        printf("File Open with fd %d\n", fd);
    
    return 0;
}
