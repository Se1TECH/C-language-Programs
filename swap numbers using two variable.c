//Que: Write program to swap to number using two variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter the value of n1 : ");
	scanf("%d",&n1);
	printf("Enter the value of n2 : ");
	scanf("%d",&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nThe value of n1 after swap : %d",n1);
	printf("\nThe value of n2 after swap : %d",n2);
	getch();
}
