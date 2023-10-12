#include<stdio.h>
int main()
{
    int a=10,b=5;
    swap(&a,&b);
    return 0;
}
void swap(int *a,int *b)
{
 int c;
 c=*a;
 *a=*b;
 *b=c;
 printf("A = %u\n",*a);
 printf("B = %u",*b);
 
}