#include <bits/stdc++.h>
using namespace std;
#define nn 102008
#define err {puts("-1");exit(0);}
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
vector<ll> v[nn],c[nn]; 
ll dist[nn];int n,m;
int main() 
{
	memset(dist,0x3f,sizeof(dist));
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y,z;scanf("%d%d%d",&x,&y,&z);
		v[x].push_back(y);v[y].push_back(x);
		c[x].push_back(z);c[y].push_back(z);
	}
	memset(dist,0x3f,sizeof(dist));
	priority_queue<pair<ll,ll> >pq;pq.push(make_pair(dist[n]=0,n));
	while(pq.size())
	{
		int x=pq.top().second;
		if(pq.top().first!=-dist[x]) 
		{
			pq.pop();
			continue;
		}
		pq.pop();
		if(x==1) break;
		
		for(int i=0;i<v[x].size();i++)
		{
			int y=v[x][i];
			if(dist[y]>=dist[x]+c[x][i])
			{
				dist[y]=dist[x]+c[x][i];
				pq.push(make_pair(-dist[y],y));
			}
		}
	}
	if(dist[1]>=2e18) err;
	int T=1;
	while(T!=n)
	{
		printf("%d ",T);
		for(int i=0;i<v[T].size();i++)
		{
			int y=v[T][i];
			if(dist[y]==dist[T]-c[T][i])
			{
				T=y;break;
			}
		}
	}printf("%d\n",n);
	return 0;
}
