#include<stdio.h>
main()
{
    int n,m;

    printf("entern the 1st year:-");
    scanf("%d",&n);
    printf("enter the 2nd year:-");
    scanf("%d",&m);

    int size = ((m-n)/2)+1;
    int array[size];
    int i,j=0;

    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            array[j]=i;
            j++;

        }
    
    }
        for (i=0;i<size;i++)
        {
            printf(" %d",array[i]);
        }
    


}