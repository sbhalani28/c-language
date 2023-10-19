#include<stdio.h>
#include<string.h>
struct Emp
{
int id,salary;
char name[50];
};
int main()
{
  int, i;
struct Emp e[50];
printf("How many record add:-");
scanf("%d",&no);
for(i=0;i<no;i++)
{
printf("Enter emp Id:-");
scanf("%d",&e[i].id);
printf("Enter emp name:-");
scanf("%s",&e[i].name);
printf("Enter emp salary:-");
scanf("%d",&e[i].salary);
}
printf("\n-------print employee-------\n");
for(i=0;i<no;i++)
{
printf("Id:-%d\n",e[i].id);
printf("Name:-%s\n",e[i].name);
printf("Salary:-%d\n",e[i].salary);
}
return 0;
}
