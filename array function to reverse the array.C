#include<stdio.h>
#include<conio.h>
void reverse(int num[],int n);
int main()
{
	int i,num[5];
	clrscr();
	printf("Enter elements= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	reverse(num,5);
}
void reverse(int num[],int n)
{
	int i;
	printf("Reverse= ");
	for(i=4;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	getch();
}