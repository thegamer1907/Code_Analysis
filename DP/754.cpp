#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main()
{
	int n;
	cin>>n;
	int arr[n];
	int ones=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			ones++;
		}
	}
	if(ones==n)
	{
		cout<<n-1<<endl;
	}
	else
	{
		int maxm=-1;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				sum++;

			}
			else
			{
				sum--;
			}
			if(sum<0)
			{
				sum=0;
			}
			maxm=max(maxm,sum);
		}
		maxm=max(sum,maxm);
		cout<<ones+maxm<<endl;
	}
	
	
	return 0;
}