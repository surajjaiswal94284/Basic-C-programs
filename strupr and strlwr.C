#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20]="sURaj JaIsWal";
	int i;
	clrscr();
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	puts(str);
	getch();
}