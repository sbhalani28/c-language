#include<stdio.h>
main()
{
    int a,b,addition,sub,multiplication,division,modulo;
    a=12;
    b=6;
    addition=a+b;
    sub=a-b;
    multiplication=a*b;
    division=a/b;
    modulo=a%b;
    printf("sum=%d + %d =%d\n",a,b,addition);
    printf("sub=%d - %d =%d\n",a,b,sub);
    printf("multiplication=%d * %d =%d\n",a,b,multiplication);
    printf("division= %d / %d = %d\n",a,b,division);
    printf("modulo =%d %% %d =%d\n",a,b,modulo);
}