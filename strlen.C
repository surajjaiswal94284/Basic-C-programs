#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20]="suraj verma";
	int i,len=0;
	clrscr();
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			len++;
		}
	}
	printf("Length=%d",len);
	getch();
}