#include<conio.h>
#include<stdio.h>
void quicksort(int arr[25],int first,int last)
{
	int i, j, pivot, temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(arr[i]<=arr[pivot]&&i<last)
				i++;
			while(arr[j]>arr[pivot])
				j--;
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quicksort(arr,first,j-1);
		quicksort(arr,j+1,last);
	}
}
int main()
{
	int arr[50],n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&arr[i]);
	}
	printf("your array  :");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}