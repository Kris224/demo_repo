#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
int main()
{
    int fd,n;
    char buf[20];
    fd=open("Sample.txt",O_RDONLY);
    n=read(fd,buf,15);
    write(1,buf,15);
    return 0;
}