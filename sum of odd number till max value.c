//que: Take max value from user and find sum of odd numbers till max value.
#include<stdio.h>
#include<conio.h>
void main()
{
	int t=1,n,sum=0;
	clrscr();
	printf("Enter max value for odd number sum: ");
	scanf("%d",&n);
	while(t<=n)
	{
		if(t%2!=0)
		sum=sum+t;
		t++;
	}
	printf("\nsum of odd numbers: %d",sum);
	getch();
}
