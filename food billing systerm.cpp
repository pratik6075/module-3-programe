#include<stdio.h>
main()
{
    int choice, b, o, p, i, Burger, dhosa, Pizza, idli;
    printf("1.Burger price=100\n2.dhosa price=120\n3.Pizza price=180\n4.idli price=50\n");
    printf("Please select your choice from 1,2,3,4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You selected Burger \n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Burger = 100 * b;
        printf("total amout is : %d", Burger);
        break;
    case 2:
        printf("You selected dhosa \n");
        printf("Please select quantity : ");
        scanf("%d", &o);
        dhosa = 120 * o;
        printf("total amount is %d", dhosa);
        break;
    case 3:
        printf("You selected Pizza \n");
        printf("Please select quantity : ");
        scanf("%d", &p);
        Pizza = 180 * p;
        printf("total amount is %d", Pizza);
        break;
    case 4:
        printf("You selected idli \n");
        printf("Please select quantity : ");
        scanf("%d", &i);
        idli = 50 * i;
        printf("total amount is %d", idli);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    int k,y,n;
    
    do
    {
    	printf("\n do you want place more order? y&n : ");
    	scanf("%d",k);
	}
	while(choice<k);
	{
	    printf("You selected Burger \n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Burger = 100 * b;
        printf("total amount is : %d", Burger);
        
    
        printf("You selected dhosa \n");
        printf("Please select quantity : ");
        scanf("%d", &o);
        dhosa = 120 * o;
        printf("total amount is %d", dhosa);
        
    
        printf("You selected Pizza \n");
        printf("Please select quantity : ");
        scanf("%d", &p);
        Pizza = 180 * p;
        printf("total amount is %d", Pizza);
        

        printf("You selected idli \n");
        printf("Please select quantity : ");
        scanf("%d", &i);
        idli = 50 * i;
        printf("total amont is %d", idli);
        
    
        printf("Invalid choice");
        
	}
}
