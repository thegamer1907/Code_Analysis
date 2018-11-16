#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

typedef pair <long long, int> ii;
typedef long long ll;

vector < ii > ladj[MAXN];
ll peso[MAXN];
bool d[MAXN];

void dfs(int node, ll path){
	if(path > peso[node])return;
	d[node] = true;
	for(int i = 0; i < ladj[node].size(); i++){
		ll calc = path + ladj[node][i].first;
		if(calc < 0)calc = 0;
		dfs(ladj[node][i].second, calc);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &peso[i]);
	}
	int aux;
	ll p;
	for(int i = 2; i <= n; i++){
		scanf("%d%lld", &aux, &p);
		ladj[aux].push_back({p, i});
	}
	dfs(1, 0LL);
	int ans = 0;
	for(int i = 1; i <= n; i++)
		if(!d[i])ans++;
	printf("%d\n", ans);
	return 0;
}
/*
8

53 41 22 22 34 95 56 24
3 -20
7 -56
5 -3
3 22
1 37
6 -34
2 32
*/