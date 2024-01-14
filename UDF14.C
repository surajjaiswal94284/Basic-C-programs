#include<stdio.h>
#include<conio.h>
void find(int arr[],int size);
main()
{
	int arr[10],i,temp,size;
	clrscr();
	printf("Enter size= ");
	scanf("%d",&size);
	printf("Enter elements= ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	find(arr,size);
}
void find(int arr[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Ascending order= ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}