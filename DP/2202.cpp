#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	int f[100002]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		f[arr[i]]++;
	}
	map <int,int> mp;
	int ans[n];
	ans[n-1] = 1;
	mp[arr[n-1]]++;
	for(int i=n-2;i>=0;i--)
	{
		if(mp.find(arr[i])==mp.end())
		{
			ans[i] = ans[i+1]+1;
			mp[arr[i]]++;
		}
		else
			ans[i] = ans[i+1];
	}
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<ans[i]<<" ";
	// }
	for(int i=0;i<m;i++)
	{
		int a;
		cin>>a;
		cout<<ans[a-1]<<endl; 
	}
	return 0;
}