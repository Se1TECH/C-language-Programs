//Que: find minimum and maximum from three values
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three values: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("\n%d is Maximum",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("\n%d is Maximum",b);
	}
	else
	{
		printf("\n%d is Maximum",c);
	}
	if((a<b)&&(a<c))
	{
		printf("\n%d is Minimum",a);
	}
	else if((b<a)&&(b<c))
	{
		printf("\n%d is Minimum",b);
	}
	else
	{
		printf("\n%d is Mimimum",c);
	}
	getch();

}
