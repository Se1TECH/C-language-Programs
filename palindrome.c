//Question: Write Program in C to Check Entered Number is Palindrome or Not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,rem,temp;
	clrscr();
	printf("Enter your value: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("%d is palidrome",temp);
	}
	else
	{
		printf("%d is not palidrome",temp);
	}
	getch();
}
