#include<stdio.h>
main()
{
	int i,j,n,s;
	
	printf("enter number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
