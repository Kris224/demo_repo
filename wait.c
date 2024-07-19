#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    pid_t cpid;
    if(fork()==0)
        exit(0);
    else{
        cpid=wait(NULL);
        printf("p=%d\n",getpid());
        printf("c=%d\n",cpid);
    }
    return 0;
}
