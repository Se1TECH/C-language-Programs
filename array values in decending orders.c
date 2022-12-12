//Question: Write Program in C to Read Numbers from user using Array Print Array Values in Decending Order
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,n,a[20];
	clrscr();
	printf("Enter number of elements :-  ");
	scanf("%d",&n);
	printf("Enter values of elements :-  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Your Decending order Arrays :-  ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
