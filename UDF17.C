#include<stdio.h>
#include<conio.h>
void check(int choice);
main()
{
	int choice;
	clrscr();
	check(choice);
}
void check(int choice)
{
	int i,sum=0,count=0,n,temp,r;
	clrscr();
	printf("1.Prime number");
	printf("\n2.Armstrong number");
	printf("\n3.Perfect number");
	printf("\n4.Exit");

	printf("\nEnter any one choice= ");
	scanf("%d",&choice);
	printf("\nEnter number= ");
	scanf("%d",&n);
	switch(choice)
	{
		case 1:
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("It is a prime number");
		}
		else
		{
			printf("It is not a prime number");
		}
		break;
		case 2:
		temp=n;
		while(temp>0)
		{
			r=temp%10;
			sum=sum+r*r*r;
			temp/=10;
		}
		if(sum==n)
		{
			printf("It is an armstrong number");
		}
		else
		{
			printf("It is not an armstrng number");
		}
		break;
		case 3:
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
		{
			printf("It is a perfect number");
		}
		else
		{
			printf("It is not a perfect number");
		}
		break;
		case 4:
		break;
		default:
		printf("Invalid choice");
	}
	getch();
}