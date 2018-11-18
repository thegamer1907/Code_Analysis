#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
const int N = 51;
const int LOGN = 19;

const int oo = 1e9;

int n,dp[101][51][51],cost[52][52],dp2[102][102][52][52],s,sz[52],e_idx[52][52],cnt=0;
vector< int > g[N];

void pre(int u , int p){
	for (int i = 0; i < g[u].size(); ++i){
		int v = g[u][i];
		if(v==p)continue;
		pre(v,u);
		sz[u] += sz[v];
	}
}
int calc2(int parent,int node,int total,int idx , int rem);

int calc(int u , int v  , int b , int f){
	if(!f)return oo;
	if(g[v].size()==1)return b?cost[u][v]+calc(v,u,0,b):cost[u][v];
	int &ret = dp[e_idx[u][v]][b][f];
	if(ret != -1)return ret;
	return ret = calc2(u,v,b+f,0,f)+cost[u][v];
}

int calc2(int parent,int node,int total,int idx , int rem){
	if(idx == g[node].size())return (rem == 0?oo:-oo);
	if(g[node][idx]==parent)return calc2(parent,node,total,idx+1,rem);
	int &ret = dp2[e_idx[parent][node]][total][idx][rem];
	if(ret != -1)return ret;
	int goingTo = g[node][idx];
	ret = -oo;
	for(int i = 0 ; i <= rem ; ++i){
		ret = max(ret,min(calc(node,goingTo,total-i,i),calc2(parent,node,total,idx+1,rem-i)));
	}
	return ret;
}

int main(){
	memset(dp,-1,sizeof dp);
	memset(dp2,-1,sizeof dp2);
	cin >> n;
	for (int u,v,w,i = 0; i < n-1; ++i){
		scanf("%d%d%d",&u,&v,&w);
		g[u].push_back(v);
		g[v].push_back(u);
		e_idx[u][v] = cnt++;
		e_idx[v][u] = cnt++;
		cost[u][v] = cost[v][u] = w;
	}
	cin >> s;
	int m;
	cin >> m;
	for(int x,i = 0 ; i < m ; ++i){
		cin >> x;
		sz[x]++;
	}
	pre(s,-1);
	int ans = oo;
	for(auto v : g[s]){
		ans = min(ans,calc(s,v,m-sz[v],sz[v]));
	}
	cout << ans  << endl;
	return 0;
}