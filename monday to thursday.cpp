#include<stdio.h>	
main()
{
	int day;
	printf("enter a number:");
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
			printf("monday");
			break;
			
			case 2:
				printf("tuesday");
				break;
				
				case 3:
					printf("wensday");
					break;
					
					case 4:
						printf("thursday");
						break;
						
						default:
							printf("somthing is wrong");					
	}
}

