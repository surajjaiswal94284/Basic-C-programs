#include<stdio.h>
#include<conio.h>
void main()
{
	char str[20]="suraj",str2[20]="boy";
	int i,j,count=0;
	clrscr();
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=str2[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("Same");
	}
	else
	{
		printf("Not same");
	}
	getch();
}