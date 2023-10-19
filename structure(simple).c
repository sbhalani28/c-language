#include<stdio.h>
#include<string.h>
struct Emp
{
int id,salary;
char name[50];
};
int main()
{
  struct Emp e1;
e1.id=111;
strcpy(e1.name,"Jay");
e1.salary=5000;
printf("\n print employee\n");
printf("ID:- %d\n",e1.id);
printf("Name:- %s\n",e1.name);
printf("Salary:- %d\n",e1.salary);
return 0;
}


