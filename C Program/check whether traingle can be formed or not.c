 #include<stdio.h>
 void main()
 {
     int a ,b , c ,sum;
     printf("Enmter three angles ");
     scanf("%d%d%d",&a,&b,&c);
     sum = a + b + c;
     printf(sum==180?"traingle can be form":"traingle cannot be formed");
 }