#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int n;
int a,b;
int dp[200007];
string s;
int main()
{
	cin>>s;
	dp[0]=0;
	dp[1]=0;
	for(int i=1;i<s.size();i++)
	{
		dp[i+1]=dp[i]+(s[i]==s[i-1]);
	}
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if(a==b-1) printf("%d\n",s[a-1]==s[a]);
		else printf("%d\n",dp[b]-dp[a]);
	}
	return 0;
} 
