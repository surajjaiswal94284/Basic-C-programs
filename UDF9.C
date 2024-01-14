#include<stdio.h>
#include<conio.h>
void cube(int n);
main()
{
	int n;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	cube(n);
}
void cube(int n)
{
	printf("Cube of %d is %d",n,n*n*n);
	getch();
}