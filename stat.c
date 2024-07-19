#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
    struct stat buf;
    stat("hello.c",&buf);
    printf("%d\n",buf.st_mode);
    printf("%d\n",buf.st_size);
    return 0;
}