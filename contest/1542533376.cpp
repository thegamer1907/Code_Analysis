#include <bits/stdc++.h>
using namespace std;
int dp[20];
int main() {
	
	int n,k,p;
	cin>>n>>k;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++)
	{           int x=0;
		for(int j=0;j<k;j++)
		{
			cin>>p;
			x=x<<1|p;
		}
		dp[x]=1;
	}
	int h=1<<k;
	for(int i=0;i<=h;i++)
	{
		for(int j=i;j<=h;j++)
		{
			if(!(i&j) && dp[i] && dp[j])
			{
				cout<<"YES";
				
				return 0;
				
			}
		}
	}
	cout<<"NO";
	return 0;
}