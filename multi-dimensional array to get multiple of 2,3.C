#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,table[2][10];
	clrscr();
	for(i=2;i<=3;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d ",i*j);
		}
		printf("\n");
	}
	getch();
}
