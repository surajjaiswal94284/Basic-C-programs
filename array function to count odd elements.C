#include<stdio.h>
#include<conio.h>
void odd(int *num,int n);
int main()
{
	int num[]={2,7,8,3,9},i;
	clrscr();
	printf("Array= ");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	odd(num,5);
}
void odd(int *num,int n)
{
	int i,count=0;
	for(i=0;i<5;i++)
	{
		if(num[i]%2!=0)
		{
			count++;
		}
	}
	printf("\nOdd count is %d",count);
	getch();
}