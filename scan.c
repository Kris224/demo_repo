#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,n;
    printf("emter the number of req: ");
    scanf("%d",&n);
    int a[n+3],t[n+3];
    a[n+1]=0;
    a[n]=199;
    printf("enter the requests:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the initial head: ");
    scanf("%d",&h);
    a[n+2] = h;
    int temp=0;
    for(int i=0;i<n+3;i++)
    {
        for(int j=0;j<n+2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                 temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    } 
    int hi,j=0,mov=0;
   for(int i=0;i<n+3;i++)
    {
        if(a[i]==h)
            hi=i;
    }
    for(int i=hi;i<n+3;i++,j++)
    t[j]=a[i];
    for(int i=hi-1;i>=0;i--,j++)
    t[j]=a[i];  
    printf("the sequence is : "); 
    for(int i=0;i<n+3;i++)
    {    
        printf("\t\t%d",t[i]);
    }
    for(int i=0;i<n+3;i++)
    {
        mov+=abs(t[i]-t[i+1]);
    }
    printf("\ndistance=%d",mov);
    return 0;
}