#include<stdio.h>
main()
{
    int salary;
    int HRA;
    int DA;
    int TA;
    int GS;
    printf(" enter the salary\n");
    scanf("%d",&salary);
    printf("enter HRA\n");
    scanf("%d",&HRA);
    printf("Enter DA\n");
    scanf("%d",&DA);
    printf("enter TA\n");
    scanf("%d",&TA);
    GS= salary+HRA+DA+TA;
    printf(" GS =%d",GS);
    
}