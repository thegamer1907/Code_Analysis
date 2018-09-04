#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define pss pair<string,string>
#define mp make_pair
int pr[10000005]={};
int a;
int dp[100000005]={};
void seive()
{
	pr[1]=1;
	for(int i=2;i<=10000000;i+=2)
	pr[i]=2;
	for(int i=3;i<=10000000;i+=2)
	{
		if(pr[i]==0)
		{
			for(int j=1;j*i<=10000000;j+=2)
			{
				pr[j*i]=i;
			}
		}
	}
}
void fact(int x)
{
	map<int,int> m;
	while(x!=1)
	{
		if(m.find(pr[x])==m.end())
		{
			dp[pr[x]]+=1;
			m[pr[x]]=1;
		}
		x/=pr[x];
	}
}
int main()
{
		std::ios::sync_with_stdio(false);
		seive();
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			fact(a);
		}
		for(int i=1;i<=10000002;i++)
		{
			dp[i]+=dp[i-1];
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			ll l,r;
			cin>>l>>r;
			l=min(l,1LL*(10000000));
			r=min(r,1LL*(10000000));
			ll ans=dp[r]-dp[l-1];
			cout<<ans<<"\n";
		}
}
