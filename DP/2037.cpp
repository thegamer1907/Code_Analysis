#include <bits/stdc++.h>
#define llu long long unsigned
#define lld long long int
#define ii pair<int, int>
#define x first
#define y second
#define pb(x) push_back(x)
#define go(i,n) for (int i = 0; i < (int)n; i++)
#define vi vector <int>
#define vii vector <ii>
#define INF 0x3f3f3f3f
#define ff first
#define ss second
#define dd pair<double, double>
#define ms(v, x) memset(v, x, sizeof(v))
#define MAXN 1000000
using namespace std;

int dp[MAXN];
int seen[MAXN];
int v[MAXN];


int main (){
	int n, m;
	scanf ("%d %d", &n, &m);
	go(i,n){
		scanf ("%d", &v[i]);
	}
	dp[n-1] = 1;
	seen[v[n-1]] = 1;
	for (int i = n-2; i >= 0; i--){
		dp[i] = dp[i+1] + (!seen[v[i]]);
		seen[v[i]] = 1;
	}
	go(i,m){
		int x;
		scanf ("%d", &x);
		printf("%d\n", dp[x-1]);
	}
	return 0;
}
