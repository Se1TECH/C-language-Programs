//Que: find maximum number from three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("Enter value of n1: ");
	scanf("%d",&n1);
	printf("Enter value of n2: ");
	scanf("%d",&n2);
	printf("Enter value of n3: ");
	scanf("%d",&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\nn1 value %d is maximum",n1);
		}
		else
		{
			printf("\nn3 value %d is maximum",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("\nn2 value %d is maximum",n2);
		}
		else
		{
			printf("\nn3 value %d is maximum",n3);
		}
	}
	getch();
}
