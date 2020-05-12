#include<stdio.h>
int main()
{
	int choice;
	printf("enter your order\n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5.Sandwich\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Food item-Pizza\nPrice-Rs.239");
		       break;
		case 2:printf("Food item-Burger\nPrice-Rs.129"); 
		       break;
		case 3:printf("Food item-Pasta\nPrice-Rs.179");
		       break;
		case 4:printf("Food item-French Fries\nPrice-Rs.99");
		       break;
		case 5:printf("Food item-Sandwich\nPrice-Rs.149");
		       break;
		default:printf("invalid choice");	   	   	      
	}
	return 0;
  }
