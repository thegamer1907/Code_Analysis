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

int h1, h2, h3;
int t1, t2;

int mod(int x, int m = 12) {
	while(x < 0) x += m;
	return x % m;
}

bool go(int step) {
	int x1 = t1;
	if(step == -1) x1 = mod(x1 + step);
	while(true) {
		if(step == 1 && x1 == t2) return true;
		if(x1 == h1 || x1 == h2 || x1 == h3) return false;
		if(x1 == t2) return true;
		x1 = mod(x1 + step);
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	
	cin >> h1 >> h2 >> h3;
	cin >> t1 >> t2;
	
	h2 /= 5;
	h3 /= 5;
	
	h1 %= 12;
	h2 %= 12;
	h3 %= 12;
	t1 %= 12;
	t2 %= 12;
	
	if(go(-1) || go(1)) cout << "YES" << endl;
	else cout << "NO" << endl;

   return 0;
}
