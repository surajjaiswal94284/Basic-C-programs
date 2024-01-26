#include<stdio.h>
#include<conio.h>
void main()
{
	char str[]="HELLO WORLD";
	clrscr();
	puts(str);
	str="hello";
	puts(str);
	getch();
}                      //string cannot be reinitialized with array.