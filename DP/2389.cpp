#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	int temp=1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<k;i++)
	{
		sum+=arr[i];
	}
	int sum1=sum;
	for(int i=k;i<n;i++)
	{
		sum=sum-arr[i-k]+arr[i];
		if(sum1>sum)
		{
			temp=(i-k+2);
			sum1=sum;
		}
	}
	cout<<temp<<endl;
}
