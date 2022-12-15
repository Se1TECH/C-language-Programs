//Question: Write a Program in C to Print Array Values using Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float *p,a[20];
	clrscr();
	printf("How many elements you want in array :- ");
	scanf("%d",&n);
	printf("Enter your %d elements :- \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	p=&a[i];
	printf("\nThe elements os array: \n ");
	for(i=0;i<n;i++)
	{
		printf("\n%f at address %u",a[i],p++);
	}
	getch();
}
