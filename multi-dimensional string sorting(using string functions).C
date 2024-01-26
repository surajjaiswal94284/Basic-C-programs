#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[5][20],temp[50];
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter %d string= ",i+1);
		scanf("%s",str[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if((strcmp(str[i],str[j])>0))
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("Sorting order=\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",str[i]);
	}
	getch();
}