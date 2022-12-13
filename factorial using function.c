//Question: Write Program in C to Print Factorial using Function. 
#include<stdio.h>
#include<conio.h>
void fact(int);

void main()
{
	int i;
	clrscr();
	printf("Enter value for factorial : ");
	scanf("%d",&i);
	fact(i);
	getch();
}
void fact(int i)
{
	int a,fact=1;
	for(a=1;a<=i;a++)
	{
		fact=fact*a;
	}
	printf("\nYour factorial of %d is : %d",i,fact);
}
