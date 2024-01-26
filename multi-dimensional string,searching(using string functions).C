#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[5][20],item[30];
	int i,x,count=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter %d string= ",i+1);
		scanf("%s",str[i]);
	}
	printf("Enter string to search= ");
	scanf("%s",item);
	for(i=0;i<5;i++)
	{
		x=strcmp(str[i],item);
		if(x==0)
		{
			printf("%s is found at %d position",item,i+1);
			count++;
		}
	}
	if(count==0)
	{
		printf("%s is not found",item);
	}
	getch();
}
