//Que: Check user is eligible for voting or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>18 && age<100)
	{
		printf("\nYou are eligible for Voting");
	}
	else
	{
		printf("\nYou are not eligible for voting");
	}
	getch();
  
}
