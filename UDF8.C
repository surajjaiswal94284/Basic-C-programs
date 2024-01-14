#include<stdio.h>
#include<conio.h>
void power(int b,int e);
main()
{
	int b,e;
	clrscr();
	printf("Enter base= ");
	scanf("%d",&b);
	printf("Enter exponent= ");
	scanf("%d",&e);
	power(b,e);
}
void power(int b,int e)
{
	int i,c=1;
	for(i=0;i<e;i++)
	{
		c=c*b;
	}
	printf("Power=%d",c);
	getch();
}