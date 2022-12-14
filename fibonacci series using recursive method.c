//Question: Write Program in C to Print Fibonacci Series using
// Recurive Method
#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
	int i,n;
	clrscr();
	printf("Enter Series :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}
	getch();
}
int fib(int n)
{
	if(n==1||n==2)
	{
		return(1);
	}
	return (fib(n-1)+fib(n-2));
}
