//Ass-2 P-4
#include<stdio.h>
int main()
{
	int ch,n,arr[20];
	printf("\nSize of the array-:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array-:");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("\The elements of the array you entered is-:");
	for(int j=0;j<n;j++)
	{
		printf("%d",arr[j]);
		printf("\n");
	}
	printf("\nEnter 1.Maximum Element \n2.Minimum Element \n3.Sum Of All Elements \n4.Product Of Non-Zero Elements are");
	scanf("%d",&ch);
	if(ch==1)
	{
		int max=arr[0];
		for(int j=0;j<n;j++)
		{
			if(max<arr[j])
			max=arr[j];
		}
		printf("\n Maximum Element-: %d",max);
	}
	if(ch==2)
	{
		int min=arr[0];
		for(int j=0;j<n;j++)
		{
			if(min>arr[j])
			min=arr[j];
		}
		printf("\n Minimum Element-: %d",min);
	}
	if(ch==3)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=arr[j];
		}
		printf("\n Sum Of Elements-: %d",sum);
	}
	if(ch==4)
	{
		int p=1;
		for(int j=0;j<n;j++)
		{
			if(arr[j]!=0)
			p*=arr[j];
		}
		printf("\n Product Of Elements-: %d",p);
	}
	return 0;
}
