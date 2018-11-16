#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int vis[10005],col[10005],req[10005],ans;//,sz[105];
vector <int> v[10005];
void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<v[x].size();++i)
	{	int child=v[x][i];
		if(!vis[child])
		{
			col[child]=req[x];
			//cout<<"child"<<child<<"col"<<col[child]<<"req"<<req[child]<<"coll"<<col[x]<<"reqq"<<req[x]<<endl;
			if(col[child]!=req[child])
				++ans;
			col[child]=req[child];
			dfs(child);
			
		}
	}
}
int main()
{	int n,m,x,z,i,y,j;ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	cin>>n;
	for(i=0;i<n-1;++i)
	{	cin>>x;
		v[x].pb(i+2);
	}
	for(i=1;i<=n;++i)
		cin>>req[i];
	 ans=1;col[1]=req[1];
	dfs(1);
	cout<<ans;
	return 0;
}