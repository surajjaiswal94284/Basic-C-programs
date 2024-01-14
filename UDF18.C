#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int n);
main()
{
	int n,ans;
	clrscr();
	printf("Enter term= ");
	scanf("%d",&n);
	ans=sum(n);
	printf("Sum up to %d=%d",n,ans);
	getch();
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	return sum(n-1)+n*n;
}