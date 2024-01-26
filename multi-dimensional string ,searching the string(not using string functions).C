#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[3][10],item[20];
	int i,j,flag=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter %d string= ",i+1);
		scanf("%s",str[i]);
	}
	printf("Enter string want to search= ");
	scanf("%s",item);
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		{
			item[i]+=32;
		}
	}
	item[i]='\0';
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(str[i][j]>='A' && str[i][j]<='Z')
			{
				str[i][j]+=32;
			}
		}
	}
	for(i=0;i<3;i++)
	{
			for(j=0;item[j]!='\0';j++)
			{
				if(str[i][j]==item[j])
				{
					if(str[i][j+1]=='\0' && item[j+1]=='\0')
					{
						flag=1;
						printf("%s is found at %d position",item,i+1);
						break;
					}
					else
					{
						continue;
					}
				}
				else
				{
					break;
				}
			}
	}
	if(flag=0)
	{
		printf("Searched %s is not found",item);
	}
	getch();
}