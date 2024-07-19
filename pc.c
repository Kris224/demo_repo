#include<stdio.h>
#include<stdlib.h>

int mutex=1;
int full=0;
int x;

int wait(int s)
    {
        return(--s);
    }

int signal(int s)
    {
        return(++s);
    }

void producer()
    {
        mutex=wait(mutex);
        full=full+1;
        printf("product produced\n");
        x=x+1;
        printf("the number of products remaining =%d\n",x);
        mutex=signal(mutex);
    }

void consumer()
    {
        mutex=wait(mutex);
        full=wait(full);
        printf("product used\n");
        x=x-1;
        printf("the number of products remaining =%d\n",x);
        mutex=signal(mutex);
    }    

  int main()
    {
        int choice;
        printf("\n1.producer\n2.concumer\n3.exit\n");
        do
        {
            printf("enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                  if((mutex==1)&&(full!=3))
                        producer();
                  else
                        printf("not produced!\n");        
                break;
                case 2:
                {
                  if((mutex==1)&&(full!=0))
                        consumer();
                  else
                        printf("not consumed!\n");
                 break;              
                }
            }
        }while(choice!=3);
    return 0;
    }  