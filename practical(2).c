#include<stdio.h>
int main()
{
    int n1,n2,choice;

    printf("enter the n1:-");
    scanf("%d",&n1);
    printf("enter the n2:- ");
    scanf("%d",&n2);

    if(n1>n2)
    {
        printf("n1 is max");
    }
    else{
        printf("n2 is max");

    }
    printf("enter your choice:-");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        
        if(n1>n2)
        printf("n1 is max");
        break;
         
        case 2:

        printf("n2 is max");
        break;
    }
}