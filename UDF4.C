#include<stdio.h>
#include<conio.h>
float diameter(float r);
float circum(float r);
float area(float r);
main()
{
	float d,c,r,a;
	clrscr();
	printf("Enter radius: ");
	scanf("%f",&r);
	d=diameter(r);
	printf("Diameter=%f",d);
	c=circum(r);
	printf("\nCircumference=%f",c);
	a=area(r);
	printf("\nArea of circle=%f",a);
	getch();
}
float diameter(float r)
{
	return 2*r;
}
float circum(float r)
{
	return 2*3.14*r;
}
float area(float r)
{
	return 3.14*r*r;
}