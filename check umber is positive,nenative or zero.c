//check numbers is positive, negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("Enter value : ");
	scanf("%d",&no);
	if(no==0)
	{
		printf("Entered number is zero");
	}
	else if(no>=1)
	{
		printf("Entered number is positive");
	}
	else
	{
		printf("Entered number is negative");
	}
	getch();
}
