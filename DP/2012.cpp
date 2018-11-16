#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	set<int>S;
	//S.insert(arr[arr.size()-1]);
	for(int i=n-1;i>=0;i--)
	{
		S.insert(arr[i]);
		dp[i+1] = S.size();
	}
	while(m--)
	{
		int li;
		cin>>li;
		cout<<dp[li]<<"\n";
	}
}
