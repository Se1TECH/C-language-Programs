//Question: Write Program in c to check entered number is prime or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,count=0,i;
	clrscr();
	printf("Enter Value : ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is Prime Number",no);
	}
	else
	{
		printf("%d is not Prime Number",no);
	}
	getch();
	
}
