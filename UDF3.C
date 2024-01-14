#include<stdio.h>
#include<conio.h>
int traingle(int base,int height);
main()
{
	int base,height,area;
	clrscr();
	printf("Enter base and height= ");
	scanf("%d %d",&base,&height);
	area=triangle(base,height);
	printf("Area of triangle=%d",area);
	getch();
}
int triangle(int base,int height)
{
	return (base*height)/2;
}