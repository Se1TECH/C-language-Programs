//Question: Write Program in C to Check Entered Number is Odd or Even.
#include<stdio.h>
#include<conio.h>
int oddEven(int);
void main()
{
	int n1;
	clrscr();
	printf("Enter Number for check Odd or Even : ");
	scanf("%d",&n1);
	oddEven(n1);
	getch();
}
int oddEven(int n1)
{
	if(n1%2==0)
	{
		printf("%d is Even",n1);
	}
	else
	{
		printf("%d is Odd",n1);
	}
}
