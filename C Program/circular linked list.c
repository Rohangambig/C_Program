#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *rlink ;
    struct node *llink;
};
struct node *head , *temp;
void push()
{
    int item;
    printf("Enter the elements to be insert ");
    scanf("%d",&item);
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = item;
    if(head == NULL)
        head = temp =ptr ;  
    else
    {
        temp -> rlink = ptr ;
        temp = ptr ;
        temp -> rlink  =  head ;
    }
}
void display()
{
    struct node *ptr  = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    if(head == NULL)
        printf("List is empty ");
    else
    {
        do
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> rlink ;
        }while(ptr != head);
    }
}
void pop_at_beg()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head ;
    if(head == NULL)
        printf("empty list ");
    else
    {
        head = ptr ->rlink ;
        temp -> rlink =  head ;
        free(ptr);
    }
}

void insert_at_beg()
{
    int item;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the elements to be insert : ");
    scanf("%d",&item);
    ptr -> data = item ;
    temp -> rlink = ptr ;
    ptr -> rlink = head;
    head = ptr ;
}

void insert_at_pos()
{
    struct node*  ptr = (struct node*)malloc(sizeof(struct node));
    struct node*  ptr1 = (struct node*)malloc(sizeof(struct node));
    int item , add;
    printf("Enter the elements to be insert ");
    scanf("%d",&item);
    printf("Enter the address where the elements to be insert : ");
    scanf("%d",&add);
    ptr = head ;
    ptr1 -> data = item;
    if(head == NULL )
    {
        head = temp = ptr1;
    }
    if(add == 1)
    {
        temp -> rlink = ptr1 ;
        temp = ptr1 ;
        ptr1 -> rlink = head ;
    }
    else
    {
         add -=1;
        while(add!=0)
        {
            ptr = ptr -> rlink ;
            add -=1 ;
        }
        ptr1 -> rlink = ptr -> rlink ; 
        ptr ->rlink = ptr1;
        ptr1 -> llink = ptr ;

    }
}

void pop_at_end()
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* ptr1 = (struct node*)malloc(sizeof(struct node));
    ptr1 = ptr = head ;
    if(head == NULL)
        printf("List is empty ");
    else
    {
        ptr = ptr -> rlink ;
       do
        {
            ptr = ptr -> rlink;
            ptr1 = ptr1 -> rlink ;
        } while(ptr ->rlink != head);
        ptr1 -> rlink = ptr -> rlink ;
        // free(ptr);
    }
}
void pop_at_pos()
{
    struct node* ptr1 = (struct node*)malloc(sizeof(struct node));
    struct node* ptr2 = (struct node*)malloc(sizeof(struct node));
    int add;
    printf("Enter the address to be deleted : ");
    scan("%d",&add);
    ptr2 = ptr1 = head;
    if(head == NULL)
        printf("Linked list is empty : ");
    else
    {
             
    }
}

int main()
{
int ch ;
    while(1)
    {
    printf("\n\nEnter your choice : \n1. push\n 2. display \n3.exit\n4.pop\n5.Insert the element at the front \n6.insert at the position \n7.delete the node at the end\n");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
                    break;
            case 2 : display();
                    break;
            case 3 : exit(0);
            case 4 : pop_at_beg();
                    break;
            case 5 : insert_at_beg();
                    break;
            case 6 : insert_at_pos();
                    break;
            case 7 : pop_at_end();
                    break;
            case 8 : pop_at_pos();
                    break;
            default : printf("  *****   invalid   *****  ");
        }
    }
    return 0;
}