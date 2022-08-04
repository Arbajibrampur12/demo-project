#include<stdio.h>
main()
{
	int n,a=0,b=1,c,i;
	printf("\n enter range");
	scanf("%d",&n);
	printf("\n %d \t %d",a,b);
	for(i=1; i<=n; i++)
	{
		c=a+b;
		printf("\t %d",c);
		a=b;
		b=c;
	}
	
}

