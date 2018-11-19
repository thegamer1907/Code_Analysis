#include <bits/stdc++.h>

using namespace std;

#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)
#define PB(a) push_back(a);
typedef pair<int , int> P2;

const int MC = 55;
const int INF = 123456789;
int n,m,s;
vector<int> V[MC];
vector<int> R;
vector<int> R2;
int c[MC];
int d[MC][MC];
int ans[MC][MC];
int dp[MC];

int dfs(int p , int q){
	int w = INF;
	if(p > 0 && (int)V[q].size() == 1) R2.push_back(q);
	for(auto u : V[q]){
		if(u == p) continue;
		c[q] += dfs(q,u);
		if(p < 0){
			fill(dp,dp+MC,0);
			dp[0] = INF;
			for(auto y : R2){
				repm(z,c[q],0){
					repm(j,z,0){
						dp[z] = max(dp[z],min(dp[z-j],d[q][y]+ans[y][m-j]));
					}
				}
			}
			w = min(w,dp[c[q]]);
			c[q] = 0;
			R2.clear();
		}
	}
	return p < 0 ? w : c[q];
}

int main(){
	scanf("%d" , &n);
	repp(i,0,MC) fill(d[i],d[i]+MC,INF);
	repp(i,1,n){
		int u,v,w;
		scanf("%d%d%d" , &u , &v , &w);
		V[u].PB(v);
		V[v].PB(u);
		d[u][v] = d[v][u] = w;
	}
	repp(i,1,n+1) d[i][i] = 0;
	repp(k,1,n+1) repp(i,1,n+1) repp(j,1,n+1) d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
	repp(i,1,n+1) if((int)V[i].size() == 1) R.push_back(i);
	scanf("%d" , &s);
	scanf("%d" , &m);
	repp(i,0,m){
		int a;
		scanf("%d" , &a);
		++c[a];
	}
	repp(i,1,n+1){
		fill(ans[i],ans[i]+MC,INF);
		ans[i][0] = 0;
	}
	repp(i,0,m){
		for(auto x : R){
			fill(dp,dp+MC,0);
			dp[0] = INF;
			for(auto y : R){
				repm(z,i+1,0){
					repm(j,z,0){
						dp[z] = max(dp[z],min(dp[z-j],d[x][y]+ans[y][i+1-j]));
					}
				}
			}
			ans[x][i+1] = dp[i+1];
		}
	}
	printf("%d\n" , dfs(-1,s));
	return 0;
}
