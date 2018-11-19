#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define max3(A,B,C) max((A),max((B),(C)))

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const int INF = 0x3f3f3f3f;
const long long int INFL = 0x3f3f3f3f3f3f3f3f;
const double pi = atan(1.0)*4.0;
const int N = 0;

int main(void) {
	ios_base::sync_with_stdio(false);
	string p, x;
	int n, l = 0, r = 0;
	
	cin >> p;
	
	cin >> n;
	
	while(n--) {
		cin >> x;
		if(x[0] == p[0] && x[1] == p[1]) {
			l++;
			r++;
		}
		if(x[0] == p[1]) l++;
		if(x[1] == p[0]) r++;
	}

	if(l > 0 && r > 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	

   return 0;
}
