#include<bits\stdc++.h>
using namespace std;
int n;
int a,b;
int dp[100007];
string s;
int main()
{
	ios::sync_with_stdio(false);
	cin>>s;
	dp[0]=0;
	dp[1]=0;
	for(int i=1;i<s.size();i++)
	{
		dp[i+1]=dp[i]+(s[i]==s[i-1]);
	}
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a==b-1) cout<<(s[a-1]==s[a])<<endl;
		else cout<<dp[b]-dp[a]<<endl;
	}
	return 0;
} 
