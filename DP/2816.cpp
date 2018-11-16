#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (a); i < (int) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define forall(it, v) for(auto it = v.begin(); it != v.end(); ++it)
#define dforn(i, n) for(int i = ((int) n) - 1; i >= 0; i--)
#define db(v) cerr << #v << " = " << v << endl
#define pb push_back
#define mp make_pair
#define sz(x) ((int)x.size())
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
const int MAXN = 2050, MOD = 1e9+7;

ll C[MAXN][MAXN];
void corre(int i, int j){
    for(int p = i; p < MAXN; p+=i){
        C[p][j+1] = (C[p][j+1] + C[i][j])%MOD;
    }
}

int n, k;

int main(){
//	freopen("input.txt", "r", stdin);
	forr(i, 1, MAXN)C[i][1] = 1;
	forr(i, 1, MAXN)forr(j, 1, MAXN-1)corre(i, j);
//	forn(i, 6){
//        forn(j, 10)printf("%d ", C[i][j]);puts("");
//	}puts("");
	while(scanf("%d %d", &n, &k) >= 1){
        ll ans = 0;
        forn(i, n+1)ans = (ans + C[i][k]) %MOD;
        printf("%lld\n", ans);
    }
	return 0;
}
