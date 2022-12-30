 #include<stdio.h>
 void main()
 {
    int n ,a[10],i,j,temp;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the elements of an array ");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(  i=0 ;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j] ;
                a[j] = temp;
            }
        }
    }
    printf("sorted list are : ");
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 }