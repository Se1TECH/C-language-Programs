//Quetion: Write Program in C to Check Entered number is armstrong or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,rem,sum=0;
	clrscr();
	printf("Enter value : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("\n%d is armstrong number",n);
	}
	else
	{
		printf("\n%d is not armstrong number",n);
	}
	getch();
	
}
