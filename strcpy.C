#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20]="suraj verma",str2[20];
	int i;
	clrscr();
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	str2[i]='\0';
	puts(str2);
	getch();
}