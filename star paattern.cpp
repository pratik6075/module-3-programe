#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
