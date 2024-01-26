#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i,n,m;
	clrscr();
	printf("Enter string= ");
	gets(str);
	printf("Enter start index= ");
	scanf("%d",&n);
	printf("Enter last index= ");
	scanf("%d",&m);
	printf("Your new string between %d to %d is ",n,m);
	for(i=n;i<=m;i++)
	{
		printf("%c",str[i]);

	}
	getch();
}