#include <bits/stdc++.h>

#define INF 1LL << 30
#define rep(i, a, b) for(int i = int(a); i < int(b); i++)
#define pb push_back
#define debug(x) cout << #x << " = " << x << endl;
#define debug2(x,y) cout << #x << " = " << x << " --- " << #y << " = " << y << "\n";
#define debugM( x, l, c ) { rep( i, 0, l ){ rep( j, 0, c ) cout << x[i][j] << " "; printf("\n");}}
#define all(S) (S).begin(), (S).end()
#define F first
#define S second
#define mk make_pair
#define N 25000
#define FOR(i,a,b) rep(i,a,b+1)
#define SET(c,v) memset(c, v, sizeof c);

using namespace std;

typedef long long int ll;
typedef pair <ll, ll> ii;

bool cmp( ii a, ii b ){
	return a.F < b.F;
}

int main(){
	
	int n, d;
	ii v[100100];
	
	while( scanf("%d%d", &n, &d ) != EOF ){
		rep( i, 0, n ) scanf("%lld%lld", &v[i].F, &v[i].S );
		sort( v, v+n, cmp );
		ll i = 0, j = 0, best = 0, at = 0;
		while( j < n ){
			if( v[j].F - v[i].F < d ){
				at += v[j].S;
				j++;		
			}
			else{
				at -= v[i].S;
				i++;
			}
			best = max( best, at );
		}
		cout << best << "\n";
	}
	
}
