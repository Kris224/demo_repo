#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,h,temp,hi,j=0;
    printf("Enter the number of requests: ");
    scanf("%d",&n);
    int r[n+3],t[n+3];
    r[0] = 0;
    r[1] = 199;
    printf("Enter the disk postions to be read: ");
    for(int i=2; i<n+2; i++)
        scanf("%d",&r[i]);
    printf("Enter the initial head: ");
    scanf("%d",&h);
    r[n+2] = h;
    for(int i=0; i<n+3; i++)
        for(int j=0; j<n+2-i; j++)
            if(r[j] > r[j+1]){
                temp = r[j];
                r[j] = r[j+1];
                r[j+1] = temp;
            }
    for(int i=1; i<n+2; i++)
        if(r[i] == h){
            hi = i;
            break;
        }
    for(int i=hi; i<n+3; i++,j++)
        t[j] = r[i];
    for(int i=0; i!=hi; i++,j++)
        t[j] = r[i];
    printf("Head movement: ");
    for(int i=0; i<n+3; i++)
        printf("%d ",t[i]);
    int distance = 0;
    for(int i=0; i<n+2; i++)
        distance += abs(t[i+1] - t[i]);
    printf("\nDistance: %d",distance);
    return 0;
}