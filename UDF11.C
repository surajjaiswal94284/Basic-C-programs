#include<stdio.h>
#include<conio.h>
void binary(int n);
main()
{
	int n;
	clrscr();
	printf("Enter number= ");
	scanf("%d",&n);
	binary(n);
}
void binary(int n)
{
	int b[50],i=0,j;
	while(n>0)
	{
		b[i]=n%2;
		n/=2;
		i++;
	}
	printf("Binary= ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",b[j]);
	}
	getch();
}