#include<stdio.h>
main()
{
    int no,i;
    printf("enter no:-");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        sum();
    }
}
void sum()
{
    int a=10,b=5,c;
    c=a+b;
    printf("Ans=%d",c);
}