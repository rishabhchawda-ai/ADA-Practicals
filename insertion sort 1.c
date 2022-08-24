#include<stdio.h>
#include<conio.h>
void main()
{
    int n,arr[50],j,i,key;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
	}
    printf("your array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=key;
    }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}