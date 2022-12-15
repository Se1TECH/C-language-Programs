//Question: Write Program in C to Print String in Reverse using Function. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char a[20])
{
	printf("\nYour reverse String is :- %s",strrev(a));
}
void main()
{
	char a[20];
	clrscr();
	printf("Enter your string:- ");
	scanf("%s",&a);
	reverse(a);
	getch();
}
