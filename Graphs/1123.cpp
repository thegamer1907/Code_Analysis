#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define ll_pair pair<ll,ll>
#define dbp pair< pair<int,int>,pair<int,int> >
#define ii pair<ll,ll>
#define iii pair<ll,ii>
int n;
bool dfs(int src, int des, vector<vector<int>>&g)
{
	if(src == des)
		return true;
	if(src>des or src>=n) return false;
	return dfs(g[src][0],des,g);
}

int main()
{
	int t;
	cin>>n>>t;
	vector<int>v(n+1);
	for(int i=1; i<=n; i++)
		cin>>v[i];
	vector<vector<int>>g(n+1);
	for(int i=1; i<=n; i++)
		g[i].push_back(i+v[i]);
	if(dfs(1,t,g))
		cout<<"YES";
	else cout<<"NO";
}