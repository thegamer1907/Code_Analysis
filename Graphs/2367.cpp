#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
#include<sstream>
#include<vector>
#include<string.h>
#include<queue>
#include<list>
#include<iterator>
#include<functional> 
#include<iomanip>
#include<bitset>
#include<stack>
#define F first
#define S second
#define ll long long
#define ld long double
#define ull unsigned ll 
#define dong long
#define endl '\n'
#define mk make_pair
using namespace std;
void fast_in_out() {
	std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
}
void pause(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
int n;
vector<int>adj[100001];
vector<int>cost[100001];
bool vis[100001];
int ans;
void dfs(int node,int cnt)
{
	ans = max(ans, cnt);
	ll ret = 0;
	vis[node] = 1;
	for (int i = 0; i < adj[node].size();i++)
	{
		if (vis[adj[node][i]])continue;
			dfs(adj[node][i],cnt+1);
	}
	vis[node] = 0;
}
int main() {
	fast_in_out();
	//cout << fixed << setprecision(4);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		if (x == -1)continue;
		adj[x].push_back(i);		
	}
	for (int i = 1; i <= n; i++)
			dfs(i,1);
	cout << ans << endl;
	pause();
	return 0;
}