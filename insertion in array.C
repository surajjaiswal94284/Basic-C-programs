#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num[10],loc,n;
	clrscr();
	printf("Enter no.= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter number want to insert= ");
	scanf("%d",&n);
	printf("Enter at which index= ");
	scanf("%d",&loc);
	for(i=4;i>=loc;i--)
	{
		num[i+1]=num[i];
	}
	num[loc]=n;
	printf("\nArray after insertion= ");
	for(i=0;i<6;i++)
	{
		printf("%d ",num[i]);
	}
	getch();
}