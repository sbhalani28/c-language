#include<stdio.h>
int main(){
    int a=80,b=100;
    swap(&a,&b);
}
void swap(int*a,int*b)
{
    int c=*a;
    *a=*b;
    *b=c;
    
    printf("A=%u\n",*a);
    printf("B=%u\n",*b);
}