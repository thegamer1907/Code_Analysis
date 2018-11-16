#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	vector<int> dp(n);
	unordered_map<int,int> k;
	dp[n-1]=1;
	k[a[n-1]]=1;
	for(int i=n-2;i>=0;i--)
	{
		if(k[a[i]]==0)
		{
			k[a[i]]=1;
			dp[i]=dp[i+1]+1;
			
		}
		else
		            dp[i]=dp[i+1];
	}
	//for(int i=0;i<n;i++)
	//cout<<dp[i]<<" ";
	//cout<<endl;
	while(m--)
	{
		int l;
		cin>>l;
		cout<<dp[l-1]<<endl;
	}
	return 0;
}