#include<stdio.h>
#include<conio.h>
void large(int arr[],int size);
main()
{
	int arr[5],i,lar,size;
	clrscr();
	printf("Enter size= ");
	scanf("%d",&size);
	printf("Enter elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		lar=arr[i];
	}
	large(arr,size);
}
void large(int arr[],int size)
{
	int i,lar;
	for(i=0;i<size;i++)
	{
		if(arr[i]>lar)
		{
			lar=arr[i];
		}
	}
	printf("Largest element=%d",lar);
	getch();
}
