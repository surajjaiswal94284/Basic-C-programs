#include<stdio.h>
#include<conio.h>
void name(char arr[]);
int main()
{
	char arr[]="shradha";
	clrscr();
	name(arr);
	getch();
}
void name(char arr[])
{
	int i,len=0;
	for(i=0;arr[i]!='\0';i++)
	{
		len++;
	}
	printf("Length=%d",len);
	getch();
}

