#include<stdio.h>
int main()
{
    int a[50]={10,4,23,67,34},i;
    int *p=&a;
    for (i=0;i<5;i++)
    {
        printf("%u,*p");
        p++;
    }
    return 0;
}