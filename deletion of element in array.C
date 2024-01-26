#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,n;
	clrscr();
	printf("Enter numbers= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter number u want to delete= ");
	scanf("%d",&n);
	printf("\nArray afetr deletion= ");
	for(i=0;i<5;i++)
	{
		if(num[i]==n)
		{
			num[i]=num[i+1];
			i++;
		}
		printf("%d ",num[i]);
	}
	getch();
}