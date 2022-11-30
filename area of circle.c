//Que: Write Program to find area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,area;
	clrscr();
	printf("Enter value of Radius: ");
	scanf("%f",&radius);
	area = 3.14*radius*radius*radius;
	printf("\nThe Area of circle is : %f",area);
	getch();
}
