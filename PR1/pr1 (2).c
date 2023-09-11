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
    GS= salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100);
    printf(" GS =%d",GS);
    
}
