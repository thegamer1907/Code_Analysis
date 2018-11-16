#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (a); i < (int) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define dforr(i, a, b) for(int i = (int)(b-1); i >= (a); i--)
#define dforn(i, n) dforr(i, 0, n)
#define db(v) cerr << #v << " = " << v << endl
#define pb push_back
#define sz(x) ((int)x.size())
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
const int MAXN = -1;

int a, b;

int main(){
//	freopen("input.txt", "r", stdin);
	while(scanf("%d %d", &a, &b) >= 1){
        a = min(a, b);
        ll ans = 1;
        forr(i, 1, a+1)ans *= i;
        printf("%lld\n", ans);
	}
	return 0;
}
