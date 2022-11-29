//que: Find a area of rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
	float length,width,area;
	clrscr();
	printf("Enter value of length: ");
	scanf("%f",&length);
	printf("Enter value of width: ");
	scanf("%f",&width);
	area= length*width;
	printf("\nThe area of rectangle is : %f",area);
	getch();

}
