#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20][20],i,j,r1,c1,k,l;
	clrscr();
	printf("Enter no of row and column= ");
	scanf("%d %d",&r1,&c1);
	printf("Enter elements: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			for(k=0;k<r1;k++)
			{
				for(l=k+1;l<c1;l++)
			       {
					printf("%d\t",a[i][j]*a[k][l]);
			       }
			       printf("\n");
			}
		}
	}
	getch();
}