#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<fstream>
#include<cstdio>
#include<cstring>
using namespace std;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) ((int)v.size())
#define repi(n)  for(int i = 0; i < (int)(n); ++i)
#define repj(n)  for(int j = 0; j < (int)(n); ++j)
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define reprng(i,a,b) for(int i = a; i <= (int)(b); ++i)
#define reprngr(i,n,a) for(int i = n;i >= (int)(a); --i)
#define For(it,c) for(auto  it=c.begin();it!=c.end();++it)
#define log2(n) (log10((long double)n) / log10((long double)2))
#define logb(b, n) (log10((long double)n) / log10((long double)b))
#define swap(a,b) a = a + b, b = a - b, a = a - b
#define mem(a,x) memset(a,x,sizeof(a))
#define mp make_pair
typedef long long ll;
const int OO = 0x3f3f3f3f;
int restaurants = 0;
void dfs(vector<bool> &visited,vector<short> &cat, vector< vector<int> > &adj,int node,int m, int count = 0)
{
	visited[node] = true;
	if (cat[node])
		++count;
	if (count > m)
		return;
	if (sz(adj[node]) == 1 && count <= m && node != 1)
		++restaurants;
	for (int adjacent : adj[node])
	{
		if (!visited[adjacent])
		{
			if (cat[adjacent] || sz(adj[adjacent]) == 1)
				dfs(visited, cat, adj, adjacent, m, count );
			else
				dfs(visited, cat, adj, adjacent, m);

		}
	}



}



int main()
{


	int n, m;
	cin >> n >> m;
	vector<short> cat(n + 1);
	repi(n)
		cin >> cat[i + 1];
	vector < vector<int> > adj(n + 1);
	vector<bool> visited(n + 1, 0);

	repi(n - 1)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(visited, cat, adj, 1, m);
	cout << restaurants << endl;

	return 0;
}
