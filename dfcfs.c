#include<stdio.h>
#include<stdlib.h>
int main()
{
    int head,n;
    printf("enter the number of tracks: ");
    scanf("%d",&n);
    printf("enter the head: ");
    scanf("%d",&head);
    int a[n];
    printf("enter the tracks:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int cur,mov=0;
    printf("the sequence of movment : ");
    for(int j=0;j<n;j++)
    {
        printf("%d\t\t",a[j]);
        cur=a[j];
        mov+=abs(cur-head);
        head=cur;
    }
    printf("\ntotal head movement = %d\n",mov);
    return 0;
}