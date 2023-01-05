#include<stdio.h>
main()
{
	int lenght,breath,area;
	
	// * for lenth
	printf("enter the lenght of rectangle:");
	scanf("%d",&lenght);
	
	// * for breath
	printf("enter the breath of rectangle:");
	scanf("%d",&breath);
	
	//*area :: lenght*breath:
	area=(lenght*breath);
	printf("\n area of rectangle:%d",area);
}
