//Ass-2 P-4
#include<iostream>
using namespace std;
int main()
{
	int ch,n,arr[20];
	cout<<"\nSize of the array-:";
	cin>>n;
	cout<<"\nEnter the elements of the array-:";
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	cout << '\n';"\The elements of the array you entered is-:";
	for(int j=0;j<n;j++)
	{
		cout<<arr[j];
		cout<<"\n";
	}
	cout<<"\nEnter 1.Maximum Element \n2.Minimum Element \n3.Sum Of All Elements \n4.Product Of Non-Zero Elements are";
	cin>>ch;
	if(ch==1)
	{
		int max=arr[0];
		for(int j=0;j<n;j++)
		{
			if(max<arr[j])
			max=arr[j];
		}
		cout<<"\n Maximum Element-: "<<max;
	}
	if(ch==2)
	{
		int min=arr[0];
		for(int j=0;j<n;j++)
		{
			if(min>arr[j])
			min=arr[j];
		}
		cout<<"\n Minimum Element-: "<<min;
	}
	if(ch==3)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=arr[j];
		}
		cout<<"\n Sum Of Elements-: "<<sum;
	}
	if(ch==4)
	{
		int p=1;
		for(int j=0;j<n;j++)
		{
			if(arr[j]!=0)
			p*=arr[j];
		}
		cout<<"\n Product Of Elements-: "<<p;
	}
	return 0;
}
