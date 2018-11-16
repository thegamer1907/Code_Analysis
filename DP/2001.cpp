#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	int ans[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	set<int>ss;
	for(int i=n;i>0;i--)
	{
		ss.insert(arr[i]);
		ans[i]=ss.size();
	}
	for(int j=0;j<m;j++)
	{
		int l;
		cin>>l;
		cout<<ans[l]<<endl;
	}
return 0;
}