//Que : Write program to scan the two number from the user and swap it (using three variable)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After the swaping the value of A: %d",a);
	printf("\nAfter the swaping the value of B: %d",b);
	getch();
}
