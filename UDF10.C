#include<stdio.h>
#include<conio.h>
void pal(int n);
main()
{
	int n;
	clrscr();
	printf("Enter a number= ");
	scanf("%d",&n);
	pal(n);
}
void pal(int n)
{
	int i,r,sum=0,temp;
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		sum=sum*10+r;
		temp/=10;
	}
	if(sum==n)
	printf("It is a palindrome number");
	else
	printf("It is not a palindrome number");
	getch();
}