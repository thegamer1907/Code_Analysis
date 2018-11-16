#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int main()
{
	string s;
	cin>>s;
	
	for(int i=0;i<s.length()-1;i++)
	{
		dp[i+1]=dp[i];
		if(s[i]==s[i+1])
		 dp[i+1]++;	
	}
	
	int m;
	cin>>m;
	int l,r;	
	while(m--)
	{
		cin>>l>>r;
		cout<<max(0,dp[r-1]-dp[l-1])<<endl;
	}
	return 0;
}