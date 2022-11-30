//Que: get 5 subject marks and print total and percentage
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,n4,n5;
	float total,percentage;
	clrscr();
	printf("Enter 5 subject marks: ");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	total=n1+n2+n3+n4+n5;
	percentage=total/5;
	printf("\nTotal of 5 subjects: %f",total);

	printf("\nPercentage: %f",percentage);
	getch();
}
