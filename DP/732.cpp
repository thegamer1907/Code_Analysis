#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,l,r,res;
	string s;
	cin>>s;
	cin>>m;
	n=s.length();
	vector<int> dp(n);
	dp[0]=0;
	if(s[0]==s[1])
		dp[0]=1;
	for(i=1;i<n;i++){
		dp[i]=dp[i-1];
		if(s[i]==s[i-1])
			dp[i]++;
	}
	for(i=1;i<=m;i++){
		cin>>l;
		cin>>r;
		res=dp[r-1]-dp[l-1];
		cout<<res<<endl;
	}
}