//Question: Write Program in C to Create Functions without Argument, return And Perform Addition, Subtraction, Multiplication and Division.
#include<stdio.h>
#include<conio.h>

void add()
{
	int p,q,r;
	printf("-->Enter value of P and Q : ");
	scanf("%d%d",&p,&q);
	r=p+q;
	printf("Addition of 2 Numbers is : %d\n",r);
}

void sub()
{
	int p,q,r;
	printf("-->Enter value of P and Q : ");
	scanf("%d%d",&p,&q);
	r=p-q;
	printf("Subtraction of 2 Numbers is : %d\n",r);
}

void mul()
{
	int p,q,r;
	printf("-->Enter value of P and Q : ");
	scanf("%d%d",&p,&q);
	r=p*q;
	printf("Multiplication of 2 Numbers is : %d\n",r);
}

void div()
{
	int p,q,r;
	printf("-->Enter value of P and Q : ");
	scanf("%d%d",&p,&q);
	r=p/q;
	printf("Division of 2 Numbers is : %d\n",r);
}

void main(){

	clrscr();
	add();
	sub();
	mul();
	div();

	getch();


}
