#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define fi first
#define se second
#define sz(a) ((int)(a).size())
#define rep(i, a, b) for(ll (i) = (a); (i) < (b); (i)++)
#define dec(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define LOGN 16
#define MAXN 303030
#define EPS 1e-9
#define fcin ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,ll> pii;
typedef vector<int> vi;

int n, k, qt[1<<4];

int32_t main(){
	scanf("%d%d", &n, &k);
	rep(i,0,n){
		int v=0;
		rep(j,0,k){
			int b;
			scanf("%d", &b);
			v=v+v+b;
		}
		qt[v]++;
	}
	rep(i,0,(1<<k)) rep(j,0,(1<<k)) if(qt[i] && qt[j] && (i&j)==0){ puts("YES"); return 0; }
	puts("NO"); 
}


