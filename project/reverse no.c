#include<stdio.h>
main()
{
	int n,j;
	printf("\n enter n= ");
	scanf("%d",&n);
	printf("\n reverse no is: ");
	while(n>0)
	{
		j=n%10;
		printf("%d",j);
		n=n/10;
	}
}
