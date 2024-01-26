#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[5][20],temp[50];
	int i,j,k;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter %d string= ",i+1);
		scanf("%s",&str[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			for(k=0;str[i][k]!='\0';k++)
			{
				inc:
				if(str[i][k]==str[j][k])
				{
					k++;
					goto inc;
				}
				else if(str[i][k]>str[j][k])
				{
				       strcpy(temp,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],temp);
					break;
				}
				else
				{
					break;
				}
			}
		}
	}
	printf("Result=\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",str[i]);
	}
	getch();
}
