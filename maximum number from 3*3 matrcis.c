//Question: Write Program in C to Find Maximum Number from 3X3 Matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[3][3];
	clrscr();
	printf("Enter 9 Integer values: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[0][0] < arr[i][j])
			{
				arr[0][0] = arr[i][j];
			}
		}
	}
	printf("\nYour Maximum Number is : %d",arr[0][0]);
	getch();
}
