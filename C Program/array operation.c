#include<stdio.h>
#include<stdlib.h>
int a[10],i,n = 5;
void creation()
{
    printf("Enter the elements in an array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void display()
{
    printf("Element in an array is given by : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void insert()
{
    int item,add;
    printf("Enter the elements to be insert : ");
    scanf("%d",&item);
    printf("Enter the position : ");
    scanf("%d",&add);
    n+=1;
    for(i=n-1;i>=add-1;i--)
    {
        a[i+1] = a[i] ;

    }
    a[add] = item ;
}
void delete()
{
    int add;
    printf("Enter the adddress of the elements to be delete : ");
    scanf("%d",&add);
    for(i = add;i<n;i++)
        a[i] = a[i+1];
    n-=1;

}
void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : creation();
                    break;
            case 2 : display();
                    break;
            case 3 : insert();
                break;
            case 4 : delete();
                    break;
            default : exit(0);
        }
    }
}