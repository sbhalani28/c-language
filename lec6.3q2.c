#include<stdio.h>
main()
{
    int i=1,n,a=1;
    printf("enter any number:-");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        a=i*a;
    }
    printf("the fact is %d",a);
}