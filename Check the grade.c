//Que: Print grade as per percentage
#include<stdio.h>
#include<conio.h>
void main()
{
	float per;
	clrscr();
	printf("Enter percentage: ");
	scanf("%f",&per);
	if((per>=101) || (per<=0))
	{
		printf("\nPlease Enter valid percentage");
	}
	else if((per<=100) && (per>=81))
	{
		printf("\nGrade A");
	}
	else if((per<=80) && (per>=61))
	{
		printf("\nGrade B");
	}
	else if((per<=60) && (per>=41))
	{
		printf("\nGrade C");
	}
	else if((per<=40) && (per>=34))
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nFAIL");
	}
	getch();
}

