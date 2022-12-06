//Que: Print Fibonacci Series.
#include<stdio.h>
#include<conio.h>
void main()
{
	int p=0,q=1,r,n,i;
	clrscr();
	printf("Enter the terms: ");
	scanf("%d",&n);
	printf("\nYour fibonacci Series is : ");
	printf("\n%d\t%d",p,q);
	for(i=2;i<n;i++)
	{
		r=p+q;
		p=q;
		q=r;
		printf("\t%d",r);
	}
	getch();
}
