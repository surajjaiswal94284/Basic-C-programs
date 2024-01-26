#include<stdio.h>
#include<conio.h>
void vowel(char str[]);
int main()
{
	char str[20];
	clrscr();
	printf("Enter string= ");
	gets(str);
	vowel(str);
}
void vowel(char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||
		    str[i]=='u')
		{
			count++;
		}
	}
	printf("Count of vowel=%d",count);
	getch();
}