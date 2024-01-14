#include<stdio.h>
#include<conio.h>
void rectangle(int l,int b);
main()
{
	int l,b;
	clrscr();
	printf("Enter length and breadth= ");
	scanf("%d %d",&l,&b);
	rectangle(l,b);
}
void rectangle(int l,int b)
{
	printf("Area of rectangle=%d",l*b);
	getch();
}