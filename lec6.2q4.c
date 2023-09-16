#include<stdio.h>
main()
{
    int f=0,s=1,n,n3;

    printf("enter the number:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        { printf("%d\n",f);
         n3=f+s;
         f=s;
         s=n3;
        }
}
