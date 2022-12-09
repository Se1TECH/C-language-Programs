 //Question: Write Program in C to Scan 10 Value of find Sum of even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,array[10];
	clrscr();
	printf("Enter 10 values: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		if(array[i]%2==0)
		{
			sum=sum+array[i];
		}
	}
	printf("\nSum of all Even numbers are: %d",sum);
	getch();
}
