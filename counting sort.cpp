#include <stdio.h>
#include <string.h>
int getMax(int input[], int n)
{
    int mx = input[0];
    for (int i = 1; i < n; i++)
        if (input[i] > mx)
            mx = input[i];
    return mx;
}
int main() 
{
    int input[50],output[50],count[50],m,i,n,RANGE=50,x = sizeof(input)/ sizeof(input[0]);
    memset(count, 0, sizeof(count));
    //-----------------------------------
   //input in 
    printf("enter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&input[i]);
	}
	printf("your array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",input[i]);
	}
	//-----------------------------------get max
	m = getMax(input[], n);
    for (int exp = 1; m / exp > 0; exp *= 10)
	{
		//-----------------------------------counting sort
		for (i = 0; input[i]!=NULL; ++i)
        	++count[input[i]];
    	for (i = 1; i <= RANGE; ++i)
    	    count[i] += count[i - 1];
    	for (i = 0; input[i]!=NULL; ++i) 
    	{
        	output[count[input[i]] - 1] = input[i];
        	--count[input[i]];
    	}
	}
    //--------------------------------------radix sort
    
        //countSort(input, n, exp);
    //----------------------------------------
    printf("\n sorted array:");
	for(i=0;i<n;i++)
	{
		printf(" %d",output[i]);
	}
return 0;
}

