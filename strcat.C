#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20],str2[20];
	int i,j,len=0,len2=0;
	clrscr();
	printf("Enter first string= ");
	gets(str);
	printf("Enter second string= ");
	gets(str2);
	len=strlen(str);
	len2=strlen(str2);
	printf("Concat= ");
	for(i=0;i<=len2;i++)
	{
		str[len+i]=str2[i];
	}
	puts(str);
	getch();
}