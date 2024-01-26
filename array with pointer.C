#include<stdio.h>
#include<conio.h>
void main()
{
	int i,addhar[10];
	int *ptr=addhar;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter %d index= ",i);
		scanf("%d",(ptr+i));
	}
	printf("Output= ");
	for(i=0;i<5;i++)
	{
		printf("\n%d index is %d",i,*(ptr+i));
	}
	getch();
}
