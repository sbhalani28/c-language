#include<stdio.h>
main()
{
    int a[50],no,1;

    printf("enter the size of array:- ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        printf("%d a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n print negative element\n");
    for(i=0;i<no;i++)
    {
        if(a[i]<0){
            printf("%d",a[i]);
        }
    }
}