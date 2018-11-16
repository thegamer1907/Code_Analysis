#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

const int N=3e5+5;
const int p=998244353;

int32_t main()
{
	IOS;
	int n;
	cin>>n;
	int a[n+2],dist[n+2]={};
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==-1)
		{	
			q.push(i);
			dist[i]=1;
		}
	}
	while(!q.empty())
	{
		int r=q.front();
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(!dist[i] && a[i]==r)
			{
				dist[i]=dist[r]+1;
				q.push(i);
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
		ans=max(ans,dist[i]);
	cout<<ans;
 	return 0;	
}