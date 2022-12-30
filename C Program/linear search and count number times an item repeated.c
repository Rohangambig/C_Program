 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
     int i,a[10],n,item,count=0;
     printf("Enter the size of an array");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Enter the elements to be search  :");
     scanf("%d",&item);
     printf("Element found in position ");
     for(i=0;i<n;i++)
     {
        if(a[i]==item)
        {
            printf("%d\t",i+1);
            count++ ;
        }
        if(i==n-1)
        {
            printf("Number of times searching element repeated is %d",count);
            exit(0);
        }
     }
     
     printf("Element not found ");
 }