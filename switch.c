#include<stdio.h>
void main()
{
	int n;
	printf("Enter your desired number: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("\nFood Item- Biryani");
		printf("\nPrice- Rs 350");
		break;
		case 2: printf("\nFood Item- Pizza");
		printf("\nPrice- Rs 250");
		break;
		case 3: printf("\nFood Item- Pasta");
		printf("\nPrice- Rs 129 ");
		break;
		case 4: printf("\nFood Item- Burger");
		printf("\nPrice- Rs 145");
		break;
		case 5: printf("\nFood Item- Fries n Coke");
		printf("\nPrice- Rs 349");
		break;
		default: printf("Invalid choice");
	}
}
