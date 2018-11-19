//By Ralif Rakhmatullin
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<math.h>
#include<cassert>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<ctime>
#include<queue>
#include<stack>
#include<set>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<bitset>
#include<valarray>
#include<iterator>
#include<list>
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define S second
#define ld long double
#define F first
#define y1 LOL
#define ld long double
#define pb push_back
#define len length
#define sz size
#define beg begin
const ll INF = (ll)1e18 + 123;
const int inf=(int)2e9 + 123; 
const int mod=1e9+7;
using namespace std;
int n, k;
ll dp[200011][22], L = 1, R = 1;
int f[200011], a[200011];               
ll cost = 0;
ll get_cost(int l, int r){
	while(L > l){
		L --;
		cost += f[a[L]];
		f[a[L]] ++;
	}
	while(R < r){
		R ++;
		cost += f[a[R]];
		f[a[R]] ++;
	}
	while(L < l){
		-- f[a[L]];
		cost -= f[a[L]];
		L ++;
	}
	while(R > r){
		-- f[a[R]];
		cost -= f[a[R]];
		R --;
	}
	return cost;
}                                     
void get(int p, int v = n / 2, int tl = 1, int tr = n, int l = 1, int r = n){
	if(v > tr || v < tl || l > r || tl > tr)
		return;
	int opt = v;
	for(int i = min(r, v); i >= l; i --){
		ll x = dp[i - 1][p - 1] + get_cost(i, v);
		if(i <= r && x < dp[v][p]){
			dp[v][p] = x;
			opt = i;
		}
	}                     
	if(tl == tr)
		return;
	get(p, (tl + v - 1) / 2, tl, v - 1, l, opt);
	get(p, (tr + v + 1) / 2, v + 1, tr, opt, r);
}  
int main(){
	unsigned int FOR;
 	asm("rdtsc" : "=A"(FOR));
  	srand(FOR);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//cout.tie(0);
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin >> n >> k;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	ll cnt = 0;
	for(int i = 1; i <= n; i ++){
		cnt += f[a[i]];
		dp[i][1] = cnt;
		f[a[i]] ++;
	//	cout << cnt << " ";
	}
	//cout << endl;
	for(int i = 2; i <= 20; i++){
		for(int j = 1; j <= n; j ++){
			dp[j][i] = INF;
		}
	}
	memset(f, 0, sizeof(f));
	f[a[1]] = 1;
	for(int i = 2; i <= k; i ++){
		get(i);
	}  /*
	for(int i = 1; i <= k; i ++){
		for(int j = 1; j <= n; j ++){
			cout << dp[j][i] << " ";
		}
		cout << endl;
	}*/
//	cout << L << " " << R << " " << cost << endl;                       
	cout << dp[n][k];
	return 0;
}