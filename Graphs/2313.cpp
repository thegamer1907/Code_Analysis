
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define ll long long
	#define ld long double
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define pb push_back
	#define f first
	#define s second
	
	using namespace std;

	vector<int> v[100001],root;
	int ans=0,visited[100001];

	void dfs(int i,int d)
	{
		visited[i]=1;
		ans=max(ans,d);
		//cout<<i<<" "<<d<<endl;
		for(int j=0;j<v[i].size();++j)
			if(visited[v[i][j]]==0)
				dfs(v[i][j],d+1);
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		T=1;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int n,i,j,a,b;
			cin>>n;
			for(i=1;i<=n;++i)
			{
				cin>>a;
				if(a==-1)
				{
					root.pb(i);
					continue;
				}
				v[i].pb(a);
				v[a].pb(i);
			}
			for(i=0;i<root.size();++i)
				dfs(root[i],1);
			cout<<ans<<endl;
		}
		return 0;
	}
