#include <iostream>
#include <cstdlib>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ll long long
#define forn(i, j, n) for(ll i = j; i < n; ++i)
#define forc(i, n, j) for(ll i = n-1; i >= j; --i)
#define forr(i, j, n, d) for(ll i = j; i != n; d)


using namespace std;

int main(){
	ll n, a, b;
	cin >> n >> a >> b;
	--a; --b;
	long u, p = 1;
	for(u = 2; u < n; u*=2){
		a>>=1; b>>=1;
		if(a == b) break;
		++p;
	}
	if(u == n) cout << "Final!" << endl;
	else cout << p << endl;

	cin >> a;
}