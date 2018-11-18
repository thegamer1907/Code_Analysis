#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#define maxn 55
using namespace std;
const int INF = 1e9;
int n, s, m;
vector<int>G[maxn];
int num[maxn], d[maxn][maxn];
bool leaf[maxn];
int f[maxn][maxn];

vector<int>lf, LF[maxn];

void dfs1(int u, int fa){
	for(auto v: G[u]){
		if(v == fa)
			continue;
		dfs1(v, u);
		num[u] += num[v];
	}
}

void get_lf(int u, int fa){
	bool ok = 0;
	for(auto v: G[u]){
		if(v == fa)
			continue;
		ok = 1;
		get_lf(v, u);
	}
	if(ok == 0)
		lf.push_back(u);
}

int solve(int u, int m){
	if(f[u][m] != -1)
		return f[u][m];
	if(m == 0)
		return f[u][m] = 0;
	int dp[maxn][maxn];
	dp[0][0] = INF;
	for(int j = 1; j <= m; j++)
		dp[0][j] = -INF;
	int sz = LF[u].size();
	for(int i = 1; i <= sz; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = -INF;
			for(int k = 1; k <= j; k++){
				dp[i][j] = max(dp[i][j], min(dp[i - 1][j - k], d[u][LF[u][i - 1]] + solve(LF[u][i - 1], m - k)));
			}
			if(dp[i - 1][j] != INF)dp[i][j] = max(dp[i][j], dp[i - 1][j]);
			//if(u == 3 && m == 3)
				//cout << i << " " << j << " " << dp[i][j] << endl;
		}
		dp[i][0] = INF;
	}
	//cout << u << " " << m << " " << dp[sz][m] << endl;
	return f[u][m] = dp[sz][m];
}

int solve1(int u){
	if(num[u] == 0)
		return INF;
	int dp[maxn][maxn];
	dp[0][0] = INF;
	for(int j = 1; j <= m; j++)
		dp[0][j] = -INF;
	lf.clear();
	get_lf(u, s);
	int sz = lf.size();
	for(int i = 1; i <= sz; i++){
		for(int j = 1; j <= num[u]; j++){
			dp[i][j] = -INF;
			for(int k = 1; k <= j; k++){
				dp[i][j] = max(dp[i][j], min(dp[i - 1][j - k], d[s][lf[i - 1]] + solve(lf[i - 1], m - k)));
			}
			if(dp[i - 1][j] != INF) dp[i][j] = max(dp[i][j], dp[i - 1][j]);
		}
		dp[i][0] = INF;
	}
	return dp[sz][num[u]];
}

int main(){
	memset(f, -1, sizeof(f));
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(i == j)
				d[i][j] = 0;
			else
				d[i][j] = INF;
	for(int i = 1; i < n; i++){
		int u , v, w;
		cin >> u >> v >> w;
		G[u].push_back(v);
		G[v].push_back(u);
		d[u][v] = d[v][u] = w;
	}
	
	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	cin >> s;
	cin >> m;
	for(int i =1 ; i <= m; i++){
		int x;
		cin >> x;
		num[x]++;
	}
	dfs1(s, -1);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if((int)G[j].size() == 1 && i != j)
				LF[i].push_back(j);
		}
		if((int)G[i].size() == 1)
			leaf[i] = 1;
	}
			
	if(leaf[s]){
		//cout << s << endl;
		cout << solve(s, m) << endl;
	}
	else{
		int ans = INF;
		for(auto v: G[s]){
			//cout << v <<" " << solve1(v) << endl;
			ans = min(ans, solve1(v));
		}
		//cout << solve1(3) << endl;
		cout << ans << endl;
	}
	return 0;
}