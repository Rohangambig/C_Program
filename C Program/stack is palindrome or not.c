 #include<stdio.h>
 #include<stdlib.h>
 #define maxsize 5
 void main()
 {
     int top =-1,a[10],item,i,b[10],value1=0,value2=0;
     for(i=0;i<maxsize;i++)
     {
         printf("enter the elemets to be insert");
         scanf("%d",&item);
     if(top==maxsize-1)
     {
         printf("stack is full\n");
         break;
     }
     else
     {
         top++;
         a[top] = item;
         b[top] = item ; 
     }
     }
     for(i=top;i>=0;i--)
     {
       printf("%d\t",a[i]);
       value1 = value1*10 + a[i];
     }
     printf("\n");
     for(i=0;i<=top;i++)
     {
         printf("%d\t",b[i]);
         value2 = value2*10 +b[i] ;
     }
         printf("\n");
     printf(value1==value2?"Stack is palidrome":"Not a palindrome");
     
 }