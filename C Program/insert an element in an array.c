 #include<stdio.h>
 void main()
 {
     int n , a[10] , i,adress,item;
     printf("Enter the size of an array  : ");
     scanf("%d",&n);
     printf("Enter the elements of an array : ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Enter the adress   where the elemets to be insert : ");
     scanf("%d",&adress);
      printf("Enter the  elemets to be insert : ");
     scanf("%d",&item);
     n++ ;
     for(i=n;i>=adress-1;i--)
     {
        a[i+1] = a[i];
     }
     a[adress] = item;
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
 }