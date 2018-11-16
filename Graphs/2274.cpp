#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int dp[100005] , dg[100005];
vector<int> adj[100005];

int n ; 

int32_t main(){
	scanf("%d" , &n);
	for(int i = 0 ; i  < n ; i ++){
		int x ; 
		scanf("%d" , &x);
		x--;
		if(x >= 0){
			adj[x].pb(i);
			dg[i]++;
		}
	}
	queue<int> q;
	for(int i = 0 ; i < n; i ++){
		if(dg[i] ==0){
			dp[i] = 0;
			q.push(i);
		}
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int j = 0 ; j < adj[u].size();j++){
			int v = adj[u][j];
			dg[v]--;
			if(dg[v] == 0){
				dp[v] = max(dp[v] , dp[u] + 1);
				q.push(v);
			}
		}
	}
	int ans = 1;
	for(int i = 0 ; i < n; i ++) ans = max(ans , dp[i] + 1);
	printf("%d\n" , ans);
}
