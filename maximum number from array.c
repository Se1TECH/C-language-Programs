//Question: Write Program in C to find Maximum from array. 
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i;
	clrscr();
	printf("Enter 10 Numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("\nMaximum value of array: %d",arr[0]);
	getch();
}
