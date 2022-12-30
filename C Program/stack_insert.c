 #include<stdio.h>
 #define maxsize n
 int a[10];
 void main()
 {
    int  n,top=n-1,item,i;
    scanf("%d",&n);
    while(1){
    if(top==maxsize-1)
    {
        printf("std::stack<is full> ;");
    }
    else
    {
        printf("enter the elements to be insert : ");
        scanf("%d",&item);
        a[++top] == item;
    }
    printf("%d\t",item);
    for(i=top;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
 }
 }
