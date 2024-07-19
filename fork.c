#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
    pid_t p;
    p=fork();
    if(p==0)
        printf("child\n");
    else
        printf("parent\n");    
}