#include<stdio.h>
main()
{
   int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n<0)
    {
        printf("the number is negative");
    
    }
    else if(n>0)
    {
        printf("the number is positive");
    }
    else 
    {
        printf("the number is neutral");
    }

}