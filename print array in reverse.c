//Question: Write Program in C to Read 10 Integers with Array and Print array in Reverse.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i;
	clrscr();
	printf("Enter 10 Integer numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n--- Your reverse Array --- \n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	getch();
}
