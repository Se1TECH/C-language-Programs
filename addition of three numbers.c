//Que: Write a program to print the addition of three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ans;
	clrscr();
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	ans = a+b+c;
	printf("\nThe addition of three numbers : %d",ans);
	getch();
}
