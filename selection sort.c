#include<stdio.h>
#include<conio.h>
void main()
{
    
    int n,arr[50],j,i,imin,x;
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
    for (j=0;j<n-1;j++)
    {
        imin = j;
        for(i=j+1;i<n;i++)
        {
            if (arr[i]<arr[imin])
            {
                imin=i;
            }
            if(imin!=j)
            {
                x=arr[j];
                arr[j]=arr[imin];
                arr[imin]=x;
            }
        }
    }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
getch();
}