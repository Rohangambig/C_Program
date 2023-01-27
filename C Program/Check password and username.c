#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
     char admin[10],pass[10];
    printf("Enter the admin name : ");
    scanf("%s",admin);
    printf("Enter the password  : ");
    scanf("%s",pass);
    if(strcmp("admin",admin)==0 ||strcmp("Admin",admin)==0 || strcmp("ADMIN",admin)==0 )
        {
            if(strcmp("admin",pass)==0 || strcmp("Admin",pass)==0 || strcmp("ADMIN",pass)==0)
            {
                printf("Login succesfull ");
            }
            else 
                printf(" Invalid password ");
        }
    else 
        printf("invalid password or admin name ");
}