//Ass-3 P3
#include<stdio.h>
int main()
{
	int arr1[10],arr2[10],arr3[20],i,k,j,n;
	printf("\nEnter size of the array-:");
	scanf("%d",&n);
	printf("\nEnter elements of the new array-:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	} 
	
	for(i=0;i<n;i++)
	{
		if(arr1[i]%2!=0)
		arr2[j++]=arr1[i];
		else arr3[k++]=arr1[i];
	} 
	printf("\nThe elements of array 1 -:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
		printf("\n");
	} 
	
	printf("\nThe elements of array 2 -:");
	for(int m=0;m<j;m++)
	{
		printf("%d",arr2[m]);
		printf("\n");
	} 
		
	
	printf("\nThe elements of array 3 -:");
	for(int m=0;m<k;m++)
	{
		printf("%d",arr3[m]);
		printf("\n");
	} 
		
	return 0;
	
	
}

