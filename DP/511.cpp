#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
	string str;
	cin>>str;
	ll i,j,n;
	ll len=str.length();
	ll* dp=new ll[len+1]();
	for(i=len-2; i>=0; i--)
	{
		if(str[i]==str[i+1])
		{
			dp[i+1]=dp[i+2]+1;
		}
		else
		{
			dp[i+1]=dp[i+2];
		}
	}
	/*
	for(i=1; i<=len; i++)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;*/
	cin>>n;
	while(n--)
	{
		cin>>i>>j;
		cout<<dp[i]-dp[j]<<endl;
	}
	return 0;
}
