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
    int A ;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head ;
    printf("Sum of the elements in a linked list is given by : %d",add(ptr));
}
int add(struct node *ptr)
{
    int sum = 0;
    if (head == NULL )
        return 0;
    if (ptr == NULL)
        return sum;
    else 
        return sum = sum + ptr -> data + add(ptr ->link);
}
void multiplication()
{
    int a ;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head ;
    printf("Multiplication of the elements in a linked list is : %d  ", mul(ptr));
}
int mul(struct node *ptr )
{
    int product = 1;
    if (head == NULL)
        return 0;
    if (ptr == NULL)
        return product ;
    else   
        return product = product * ptr -> data * mul(ptr->link);
}

int main()
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
    return 0;
}