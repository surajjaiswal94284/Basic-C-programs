#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fib[10],n;
	clrscr();
	fib[0]=0;
	fib[1]=1;
	printf("Enter nth term u want= ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	printf("Your fibbonacci series= ");
	printf("%d %d ",fib[0],fib[1]);
	for(i=2;i<n;i++)
	{
		printf("%d ",fib[i]);
	}
	getch();
}