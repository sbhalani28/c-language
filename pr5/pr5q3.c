#include<stdio.h>
main(){
    int a[15],i,sum=0,n;
    printf("Enter the array:-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("All element sum:-\n");
     for(i=0;i<n;i++)
    {
        sum+=a[i];
}  
printf("Sum of element = %d\n",sum);
}