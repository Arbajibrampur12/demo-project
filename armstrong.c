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
		sum=sum+(j*j*j);
		n=n/10;
	}
	if(temp==sum)
	 {
		printf("\n it is armstrong number");
		
     }
	else
	{
		printf("\n it is not armstrong number");
		
	}
}
