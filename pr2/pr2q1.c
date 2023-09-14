#include<stdio.h>
main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    (a%2==0)?printf("number is even")
            : printf("number is odd");
}