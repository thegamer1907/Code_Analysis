#include<iostream>
using namespace std;

int main()
{
	int n; cin>>n;
	int arr[n], onecount=0;

	for (int i = 0;i<n; i++)
	{
		cin>>arr[i];
		if (arr[i] == 1)
		{
			onecount++;
		}

	}
	
	int ans=0;
	for (int i = 0; i<n; i++)
	{
		for (int j = i; j<n;j++)
		{
			int cost=0,count=0;
			for (int k = i; k<=j; k++)
			{
				if (arr[k] == 1)
				{
					count++;
				}
				else
				{
					cost++;
				}
			}
			ans=max(ans,cost-count+onecount);
		}
	}

	cout<<ans<<endl;
}

