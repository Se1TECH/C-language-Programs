//Question: Write a Program in C to read Array Values from User and Print Values in Accending Order.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,arr[20],n;
	clrscr();
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter %d values : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j] =temp;
			}
		}
	}
	printf("\nYour Accending order values are : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	getch();
}
