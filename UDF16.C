#include<stdio.h>
#include<conio.h>
void cal(int choice);
main()
{
	int choice;
	clrscr();
	printf("1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Division");
	printf("\n4.Multipication");
	cal(choice);
}
void cal(int choice)
{
	int a,b;
	printf("\nEnter any one choice= ");
	scanf("%d",&choice);
	printf("\nEnter a=");
	scanf("%d",&a);
	printf("\nEnter b= ");
	scanf("%d",&b);
	if(choice>4)
	{
		printf("Invalid choice");
	}
	else
	{
	switch(choice)
	{
		case 1:printf("Addition=%d",a+b);
		break;
		case 2:printf("Subtraction=%d",a-b);
		break;
		case 3:printf("Division=%d",a/b);
		break;
		case 4:printf("Multiplication=%d",a*b);
		break;
	}
	}
	getch();
}