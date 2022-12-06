//Que: scan number and print addition of all digit
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;
	clrscr();
	printf("Enter value : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem = n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\nAddition of all digits are : %d",sum);
	getch();
}
