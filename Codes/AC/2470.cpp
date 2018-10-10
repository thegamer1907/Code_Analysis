/*input
6
5 5 7 10 14 15
3
2 11
3 12
4 4
*/
#include "bits/stdc++.h"
using namespace std;
int s[10000005];
int dp[10000005];
int xx=0;
int a[10000005];
void f()
{	
	for(int i=1;i<=10000000;i++)
		s[i]=1;
	for(int i=2;i*i<=10000000;i++)
	{
		if(s[i]==1)
		{
			for(int j=i*i;j<=10000000;j+=i)
				{
					if(s[j]==1)
						s[j]=i;
				}
		}
	}
	for(int i=1;i<=10000000;i++)
		if(s[i]==1)
			s[i]=i;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	f();
	int ans=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int x=a[i];
		set<int>ss;
		while(x>1)
		{
			ss.insert(s[x]);
			x/=s[x];
		}
		for(set<int>::iterator it=ss.begin();it!=ss.end();it++)
			dp[*it]++;
	}
	for(int i=1;i<=10000000;i++)
		dp[i]+=dp[i-1];
	int q;
	cin>>q;
	while(q--)
	{
		int t,y;
		cin>>t>>y;
		if(t>=10000000)t=10000000;
		if(y>=10000000)y=10000000;
		cout<<dp[y]-dp[t-1]<<endl;
	}
}