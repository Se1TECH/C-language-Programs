//Que: find Maximum from two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter n1 value: ");
	scanf("%d",&n1);
	printf("Enter n2 value: ");
	scanf("%d",&n2);
	if(n1>n2)
	{
		printf("%d is maximum number",n1);
	}
	else
	{
	       printf("%d is maximum number",n2);
	}
	getch();

}
