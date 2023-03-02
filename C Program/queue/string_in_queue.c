#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int rear = -1;front = -1,queue[10];
void insertion()
{
    char str[10];
    printf("Enter the string to be insert into the queue : ");
    scanf("%s",str);
    if(rear = maxsize-1)
        printf("Queue is full ");
    else
    {
        queue[rear ++] = str ;
    }
}
void display()
{
    if(front ==rear)
        printf("Queue is empty ");
    else
    {

    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insertion();
                    break;
            case 2 : display();
                    break;
            default : exit(0);
        }
    }
}