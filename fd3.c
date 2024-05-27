#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>

int main()
{
    int fd1 = open("newfile1", O_CREAT | O_WRONLY | O_EXCL | O_APPEND, 0666);
    int fd2 = open("newfile2", O_CREAT | O_WRONLY | O_EXCL | O_APPEND, 0666);
    int fd3 = open("newfile3", O_CREAT | O_WRONLY | O_EXCL | O_APPEND, 0666);
    
    printf("File Open with fd %d\n", fd1);
    printf("File Open with fd %d\n", fd2);
    printf("File Open with fd %d\n", fd3);
    
    return 0;
}
