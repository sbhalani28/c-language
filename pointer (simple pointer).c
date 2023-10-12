#include<stdio.h>
int main()
{
    int a=10, b=5;
    int *p=&a;
    int *q=&b;
    printf("A address:- %u\n",p);
    printf("B address:- %u\n",q);
    
    return 0;
    
 }