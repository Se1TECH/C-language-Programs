//Question: Write Program in C to Read 5 Integers with Array and Find sum,maximum and average
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[5],sum=0;
	int avg;
	clrscr();
	printf("Enter 5 Integer numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(i=0;i<5;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	avg=sum/5;
	printf("\nMaximum number : %d",arr[0]);
	printf("\nSum of Numbers : %d",sum);
	printf("\nAverage of Numbers : %d",avg);
	getch();
}
