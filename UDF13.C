#include<stdio.h>
#include<conio.h>
void find(int arr[],int size);
main()
{
	int arr[10],i,max,min,size;
	clrscr();
	printf("Enter size= ");
	scanf("%d",&size);
	printf("Enter elements= ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		max=arr[i];
		min=arr[i];
	}
	find(arr,size);
}
void find(int arr[],int size)
{
	int i,max,min;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Maximum element=%d",max);
	printf("\nMinimum element=%d",min);
	getch();
}