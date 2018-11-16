//Author:- IITian_Sujal
//let's keep it simple and easy....
#include<bits/stdc++.h>
#define ll          long long int
#define mp          make_pair
#define pii         pair<int,int>
#define pb          push_back
#define vi          vector<int>
#define Max(a,b)    ((a)>(b)?(a):(b))
#define Min(a,b)    ((a)<(b)?(a):(b))
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<(b);i+=1)
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define mod	        1000000007
#define endl        '\n'
#define io			ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int a[2005];
int ans=1;
vector<vector<int> >g;
int dfs(int u,int val)
{
	rep(i,0,g[u].size())
	{
		int v=g[u][i];
		//cout<<u<<" "<<v<<" "<<val<<endl;
		ans=Max(ans,val+1);
		dfs(v,val+1);
	}
}
int main()
{
	io
	#ifdef LOCAL_PROJECT
	//freopen ("1.txt","r",stdin);
	#endif
	int n;
	cin >>n;
	g.resize(n+1);
	rep(i,1,n+1)
	{
		cin >>a[i];
		if(a[i]!=-1)
		{
			g[a[i]].pb(i);
		}
	}	
	rep(i,1,n+1)
	{
		if(a[i]==-1)
		{
			dfs(i,1);
		}
	}
	cout<<ans;
}