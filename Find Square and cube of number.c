//Write a program to find square and qube of user entered number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,square,cube;
	clrscr();
	printf("Enter value of n1 : ");
	scanf("%d",&n1);
	square = n1*n1;
	cube = n1*n1*n1;
	printf("\nSquare of Number : %d",square);
	printf("\nCube of number : %d",cube);
	getch();
}
