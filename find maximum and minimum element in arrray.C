#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10]={10,12,13,16},min,max,i;
	clrscr();
	for(i=0;i<4;i++)
	{
		min=num[i];
		max=num[i];
	}
	for(i=0;i<4;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
		else if(min>num[i])
		{
			min=num[i];
		}
	}
	printf("Minimum no. is %d",min);
	printf("\nMaximum no. is %d",max);
	getch();
}