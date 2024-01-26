#include<stdio.h>
#include<conio.h>
void string(char arr[]);
int main()
{
	char arr[]="suraj jaiswal";
	clrscr();
	string(arr);
}
void string(char arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	getch();
}