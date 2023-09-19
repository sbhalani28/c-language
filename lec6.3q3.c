#include<stdio.h>
main()
{
    int i,n,ans;
    printf("enter the number of table:-");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d * %d =%d\n",n,i,ans);
        
    }
    
}
