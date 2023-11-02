#include<stdio.h>
int main()
{
    int a[100],i,n,min,max;

    printf("enter the size of array:-\n");
    scanf("%d",&n);
    printf("enter the array elements:-\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);

    }
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        
        if(max<a[i])
            max=a[i];
        
    }
    printf("minimum :- %d",min);
    printf("\nmaximum:- %d",max);
    
    
}