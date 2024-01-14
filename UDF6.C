#include<stdio.h>
#include<conio.h>
float fah(float c);
main()
{
	float a,c;
	clrscr();
	printf("Enter celcius= ");
	scanf("%f",&c);
	a=fah(c);
	printf("Fahrenheit=%f",a);
	getch();
}
float fah(float c)
{
	return (c*1.8)+32.0;
}