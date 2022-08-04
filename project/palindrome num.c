#include<stdio.h>
main()
{
	int n,j,sum=0,temp;
	printf("\n enter n= ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		j=n%10;
		sum=(sum*10)+j;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n it is palindrome number");
	}
	else
	{
		printf("\n it is not palindrome number");
		
	}
}
