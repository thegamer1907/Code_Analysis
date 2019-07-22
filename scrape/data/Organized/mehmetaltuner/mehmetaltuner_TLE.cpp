#include <bits/stdc++.h>
#define ALL(e) e.begin(), e.end()
#define RALL(e) e.rbegin(), e.rend()
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define dbg(x) (cerr << #x << ":" << x << endl)
#define mid (l + r) / 2
#define pii pair <int, int>
#define fi first
#define sc second
#define N 1000000009

using namespace std;

typedef long long int lli;

int main(){
	ios::sync_with_stdio(0);
	lli n, m, k;
	cin >> n >> m >> k;

	vector <lli> ar(m);
	for(lli &x: ar) cin >> x; 

	lli a = 0, res = 0;

	while(m > 0){
		lli idx = upper_bound(ALL(ar), a + k) - ar.begin() - a;

		if(idx == 0){
			lli tmp = upper_bound(ALL(ar), a + k) - ar.begin();
			if(tmp == m+1){
				res++;
				break;
			}
			lli num = ar[tmp];
			lli x = num - a;

			if(x % k != 0)
				idx = upper_bound(ALL(ar), num + (k - (x % k))) - ar.begin() - a;
			else 
				idx = upper_bound(ALL(ar), num) - ar.begin() - a;;
		}

		m -= idx;
		a += idx;
		res++;
	}

	cout << res;

	return 0;
}