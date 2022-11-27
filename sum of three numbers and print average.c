//Que: Write program to sum of three numbers and print average

#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,sum,avg;
	clrscr();
	printf("Enter value of n1 : ");
	scanf("%d",&n1);
	printf("Enter value of n2 : ");
	scanf("%d",&n2);
	printf("Enter value of n3 : ");
	scanf("%d",&n3);
	sum = n1+n2+n3;
	printf("\nThe sum of three number is  : %d",sum);
	avg = sum/3;
	printf("\nThe Average of Three numbers is : %d",avg);
	getch();
}
