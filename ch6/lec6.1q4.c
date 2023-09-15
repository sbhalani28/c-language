#include<stdio.h>
main()
{
	int s,u;
	printf("enter the year");
	scanf("%d",&s);
	printf("enter the year");
	scanf("%d",&u);
	
	while(s<=u)
	{
		printf("%d  ",s);
		s=s+4;
		
	}
}
