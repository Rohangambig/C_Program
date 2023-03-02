#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int rear = -1 , front = -1,queue[10];
void insertion()
{
    int item;
    printf("Enter the elements to be insert : ");
    scanf("%d",&item);
    if(rear == maxsize-1)
        printf("Queue is full ");
    else
    {
        queue[++rear] = item;
    }
}
void display()
{
    if(rear == front )
        printf("Queue is empty ");
    else
    {
        for(int i=front;i<rear ; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void delete()
{
    if(rear == front )
        printf("Queue is empty ");
    else
    {
     queue[++front];
    }
    
}
void main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice : \n1.insertion\n2.display\n3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :  insertion();
                    break;
            case 2 : display();
                    break;
            case 3 : exit(0);
            case 4   : delete();
                        break;
            default : printf("**********invalid************");
        }
    }
}