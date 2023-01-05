#include<stdio.h>
main()
{
	int n,sum=0,firstdigit,lastdigit;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	
	printf("sum of first and last digit =%d",sum);
}
