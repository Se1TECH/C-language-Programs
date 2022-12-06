//Que: sum of all number between 100 to 200 which is devided by 5.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	printf("Numbers between 100 to 200 which is devided by 5");
	for(i=101;i<=200;i++)
	{
		if(i%5==0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}
	printf("\n\nSum is :  %d",sum);
	getch();
}
