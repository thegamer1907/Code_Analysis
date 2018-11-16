#include <bits/stdc++.h>
using namespace std;
typedef double D;
typedef long double LD;
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
#define SZ(X) ((int)X.size())
#define ALL(I) I.begin(), I.end()
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define eps 1e-9
inline bool equal( D _x ,  D _y ){
  return _x > _y - eps && _x < _y + eps;
}
#define MXN 200005

int n, c[MXN], m, fr, to;
LL ans;
vector<int> v[MXN];
bool vis[MXN];

int dfs(int x){
	int res = c[x];
	vis[x] = 1;
	for(auto i : v[x]){
		if(!vis[i]) res = min(res, dfs(i));
	}
	return res;
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i ++) scanf("%d", &c[i]);
	while(m --){
		scanf("%d%d", &fr, &to);
		v[to].PB(fr); v[fr].PB(to);
	}
	for(int i = 1; i <= n; i ++){
		if(!vis[i]) ans += dfs(i);
	}
	printf("%lld\n", ans);
}

