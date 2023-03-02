#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *rlink;
    struct node *llink;
};
struct node *head;
void insert()
{
    int item;
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the elements to be insert : ");
    scanf("%d",&item);
   if(head == NULL)
    {
        new_node -> data = item;
        head = new_node;
          new_node -> rlink = NULL ;
        new_node -> llink = NULL;
    } 
    else
    {
        new_node -> data  = item;
        new_node ->llink = head;
        new_node ->rlink = NULL;
        head = new_node;
    }
}
void display()
{
    struct  node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
   if(head == NULL)
        printf("There is no elements in a linked list ");
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr ->data);
            ptr  = ptr -> llink;
        }
    }   
}
void insert_pos()
{
    struct  node *ptr1 =(struct node*)malloc(sizeof(struct node));
    struct  node *ptr2 =(struct node*)malloc(sizeof(struct node));
    struct  node *new_node =(struct node*)malloc(sizeof(struct node));
    ptr2 = ptr1 = head;
    int item,add;
    printf("Enter the elements to be insert : ");
    scanf("%d",&item);
    printf("Enter the position : ");
    scanf("%d",&add);
    new_node -> data = item ;
    if(add == 1)
    {
        ptr1 -> llink = new_node;
        new_node ->rlink = ptr1;
        new_node ->llink = NULL;
        head = new_node ;
    }
    else
    {
        ptr2 = ptr2 ->llink;
        add -=1;
        while(add!=0)
        {
            ptr1 = ptr1 -> llink;
            ptr2 = ptr2 ->llink;
            add-=1;
        }
        new_node ->rlink = ptr1 ->rlink;
        ptr1 -> rlink = new_node;
        new_node -> llink = ptr1 ;
        ptr2 ->llink = new_node ;
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice :\n1.insertion\n2.display\n3.insert at the given position\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert();
                    break;
            case 2 : display();
                    break;
            case 3 : insert_pos();
                    break;
            default : exit(0);
        }
    }
    return 0;
}
