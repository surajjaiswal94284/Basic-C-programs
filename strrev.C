#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20]="suraj jaiswal";
	int i,len=0;
	clrscr();
	len=strlen(str);
	for(i=len;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	getch();
}