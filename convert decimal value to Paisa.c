//Que : Write program to convert decimal value to Paisa
#include<stdio.h>
#include<conio.h>
void main()
{
	float dec;
	int val;
	clrscr();
	printf("Enter the value of decimal number : ");
	scanf("%f",&dec);
	val = 100*dec;
	printf("\nReturn value of decimal to paisa is  :  %d",val);
	getch();
}
