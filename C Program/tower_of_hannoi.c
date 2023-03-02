#include<stdio.h>
int tower(int n ,  char beg , char aux , char end)
{
    if(n == 1)
    {
        printf("%c%c ",beg,end);
        return 0 ;
    }
    else
    {
        tower(n-1,beg,end,aux);
        printf("%c%c ",beg,end);
        tower(n-1,aux,beg,end);
        return 0 ;
    }
}
void main()
{
    int n ;
    printf("Enter the number of disk ");
    scanf("%d",&n);
    tower(n,'a','b','c');
}
