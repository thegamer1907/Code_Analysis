#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = 52;
const int inf = (int)1e6 + 42;

int n, start, m;
vector<pair<int, int> > adj[MAXN];
int tr_sz[MAXN];
int64_t stand_m[MAXN];

void read()
{
	cin >> n;
	for(int i = 0; i < n - 1; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	cin >> start;

	int x;
	cin >> x;
	m = x;

	while(x--)
	{
		int y;
		cin >> y;
		tr_sz[y]++;
	}

	stand_m[0] = 1;
	for(int i = 1; i < MAXN; i++)
		stand_m[i] = stand_m[i - 1] | (1ll << (int64_t)i);
}

int dp[MAXN][MAXN][MAXN][MAXN];

void pre_dfs(int u, int pr = -1)
{
	for(auto v: adj[u])
		if(v.first != pr)
		{
			pre_dfs(v.first, u);
			tr_sz[u] += tr_sz[v.first];
		}
}

int rec(int u, int pr, int c1, int c2)
{
	if(c1 + c2 == 0) return 0;

	int &memo = dp[u][pr][c1][c2];
	if(memo != -1) return memo;

	if(adj[u].size() == 1 && pr != 0) 
		return memo = rec(u, 0, c2, 0);

	int low = 0, high = inf, mid;
	while(low <= high)
	{
		mid = (low + high) >> 1;
		
		vector<int> sv;
		for(auto v: adj[u])
			if(v.first != pr)
				sv.push_back(0);

		int sum = 0, idx = 0;
		for(auto v: adj[u])
			if(v.first != pr)
			{
				while(sv[idx] < c1 && (v.second + rec(v.first, u, sv[idx] + 1, c2 + (c1 - sv[idx] - 1))) >= mid) sv[idx]++;
				while(sv[idx] > 0 && (v.second + rec(v.first, u, sv[idx], c2 + (c1 - sv[idx]))) < mid) sv[idx]--;
				
				sum += sv[idx];
				idx++;
			}

		if(sum >= c1)
			memo = mid, low = mid + 1;
		else
			high = mid - 1;
	}

	return memo;
}

void solve()
{
	memset(dp, -1, sizeof(dp));
	pre_dfs(start);

	int answer = inf;
	for(auto nb: adj[start])
		chkmin(answer, rec(nb.first, start, tr_sz[nb.first], m - tr_sz[nb.first]) + nb.second);

	cout << answer << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}

