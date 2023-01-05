#include<stdio.h>
main()
{
	int principle,time,rate,si;
	printf("enter principle amount:");
	scanf("%d",&principle);
	
	printf("enter time:");
	scanf("%d",&time);
	
	printf("enter rate:");
	scanf("%d",&rate);
	
	si=(principle*time*rate/100);
	printf("simple interest =%d",si);
}
