#include<bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define db(x) (cerr << #x << ": " << x << '\n')
#define sync ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long
using namespace std;

int32_t main() {
	sync;
	int n, m, x, k;
	cin >> n >> m >> x;
	
	int lo = 1, hi = n * m;
	
	while(1) {
		k = (lo + hi) / 2;
		//db(k);
		int l, le;
		//db(l), db(le), db(x);
		
		l = le = 0;
		
		rep(i, 1, n + 1) {
			le += min(m, k / i);
			
			l += min(m, k / i - (k % i == 0));
		}
		
		if(l < x && le >= x) {
			cout << k << '\n';
			return 0;
		}
		else if(l >= x) {
			hi = k - 1;
		}
		else {
			lo = k + 1;
		}
	
	}

}
