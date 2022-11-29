//que: find simple intrest
#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,SI;
	clrscr();
	printf("Enter Principle amount: ");
	scanf("%f",&p);
	printf("Enter Rate value : ");
	scanf("%f",&r);
	printf("Enter time or year : ");
	scanf("%f",&t);
	SI = (p*r*t)/100;
	printf("\nSimple Intrest : %f",SI);
	getch();
}
