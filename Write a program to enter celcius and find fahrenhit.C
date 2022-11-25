//Que : Write a program to enter celcius and find fahrenhit
#include<stdio.h>
#include<conio.h>
void main()
{
	float celcius,fahrenhit;
	clrscr();
	printf("Enter celcius value : ");
	scanf("%f",&celcius);
	fahrenhit = (9*celcius/5)+32;
	printf("The fahrenhit value is : %f",fahrenhit);
	getch();
}