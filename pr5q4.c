#include<stdio.h>
main()
{
    int a[100],i,n,min,max;
    printf("enter the number of element:-\n")
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("minimum element=%d",min);
    printf("maximum element=%d",max);
}