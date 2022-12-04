//que: create basic calculator.

#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,add,sub,mul,div;
	int choice;
	clrscr();
	printf("Enter value of a and b : ");
	scanf("%f%f",&a,&b);
	printf("\nEnter 1 for Addition");
	printf("\nEnter 2 for Subtraction");
	printf("\nEnter 3 for Multiplication");
	printf("\nEnter 4 for Division");
	printf("\n\nEnter Your Choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		add=a+b;
		printf("\nAddition : %f",add);
	}
	else if(choice == 2)
	{
		sub=a-b;
		printf("\nSubtraction : %f",sub);
	}
	else if(choice==3)
	{
		mul=a*b;
		printf("\nMultiplication : %f",mul);
	}
	else if(choice==4)
	{
		div=a/b;
		printf("\nDivision : %f",div);
	}
	else
	{
		printf("\nPlease Enter Valid Choice");
	}
	getch();
}
