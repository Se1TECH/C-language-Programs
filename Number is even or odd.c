//Que: Find entered number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1;
	clrscr();
	printf("Enter value of n1: ");
	scanf("%d",&n1);
	if(n1==0)
	{
		printf("%d is ZERO",n1);
	}
	else
	{
		if(n1%2==0)
		{
			printf("%d is EVEN",n1);
		}
		else
		{
			printf("%d id ODD",n1);
		}
	}
	getch();
	
}
