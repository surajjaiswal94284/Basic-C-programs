#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,str[50];
	int i;
	clrscr();
	printf("Enter string= ");
	for(i=0;ch!='\n';i++)
	{
		scanf("%c",&ch);
		str[i]=ch;
	}
	str[i]='\0';
	puts(str);
	getch();
}