#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	int i;
	clrscr();
	printf("Enter string= ");
	gets(str);
	printf("String after removing spaces= ");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]=str[i+1];
			i++;
		}
		printf("%c",str[i]);
	}
	getch();
}