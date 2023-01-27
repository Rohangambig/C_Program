#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
void insert()
{
    int n,item ;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the elements to be insert  ");
    scanf("%d",&item);
    ptr -> data = item ;
    ptr ->link = head ;
    head = ptr ;
}
void display()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head ;
    if(head == NULL)
        printf("There is no elements in a linked list ");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d \t",ptr ->data);
            ptr = ptr -> link ;
        }
    }
}
void addition()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    int sum = 0;
    ptr = head ;
    if(head = NULL)
        printf("Addition is not possible ");
    else
    {
        while(ptr!=NULL)
        {
            sum = sum + ptr -> data ;
            ptr = ptr -> link;
        }
        printf("Addition ofn the elements in a linked list is given by : %d",sum);
    }
}
void  multiplication()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    int product = 1;
    ptr = head ;
    if(head ==NULL)
        printf("Multiplication is not possible ");
    else
    {
        while(ptr!=NULL)
        {
            product = product * ptr -> data;
            ptr = ptr -> link ;
        }
        printf("Product of elements in a linked list is given by %d ",product);
    }
}
void main()
{ 
    int ch;
    while(1)
    {
        printf("\nEnter your choice : \n1.insert\n2.display\n3.addition\n4.multiplication");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert();
                    break;
            case 2 : display();
                    break;
            case 3 : addition();
                    break;
            case 4 : multiplication();
                    break;
            default : exit(0);
        }
    }
}