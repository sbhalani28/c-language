#include<stdio.h>
main()
{
	int n;
	printf("enter the number:-");
	scanf("%d  ",&n);
	
	while(n>=1)
	{
		printf("%d  ",n);
		n=n-2;
	}
}
