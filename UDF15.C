#include<stdio.h>
#include<conio.h>
void find(int arr[],int size);
main()
{
	int arr[10],i,size;
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
	int i,search,count=0;
	clrscr();
	printf("Enter element to search: ");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			printf("%d is found at %d position",search,i+1);
			count++;
		}
	}
	if(count==0)
	{
		printf("%d is not found",search);
	}
	getch();
}

