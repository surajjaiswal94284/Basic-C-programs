#include<stdio.h>
#include<conio.h>
int perimeter(int l,int b);
main()
{
	int l,b,area;
	clrscr();
	printf("Enter length and breadth= ");
	scanf("%d %d",&l,&b);
	area=perimeter(l,b);
	printf("Perimeter of rectangle=%d",area);
	getch();
}
int perimeter(int l,int b)
{
	return 2*(l+b);
}