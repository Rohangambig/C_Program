 #include<stdio.h>
 void main()
 {
     char ch;
     printf("Enter the caracter ");
     scanf("%c",&ch);
     if((ch>='a' && ch<='z')|| (ch>='A'&&ch<='Z'))
     printf("enter the character are alphabet");
     else if(ch>='0' && ch<='9')
     printf("enter the characters are digits ");
     else
     printf("enter the characters are  special character ");
 }