//Question: Write a Program in C to Print Table of Number using Function. 
#include<stdio.h>
#include<conio.h>
void table(int);
void main()
{
	int i;
	clrscr();
	printf("Enter number for table : ");
	scanf("%d",&i);
	table(i);
	getch();
}

void table(int i)
{
	int a;
	for(a=1;a<=10;a++)
	{
		printf("%d\t*\t%d\t=%d\n",i,a,a*i);
	}
}
