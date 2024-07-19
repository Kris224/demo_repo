#include<stdio.h>
int main()
{
    struct fcfs
    {
        int pid;
        int wtime;
        int btime;
        int tatime;
    };
    struct fcfs p[10];
   int i,n;
   float totime=0;
   float towtime=0;
   printf("enter the number of process: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        p[i].pid=i+1;
        
   } 
    
}