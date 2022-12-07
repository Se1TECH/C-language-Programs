//Question: Print factorial of number
#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,i,no;
	clrscr();
	printf("Enter number for factorial: ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("Facctorial of %d is : %d",no,fact);
	getch();
}
