#include <bits/stdc++.h>
using namespace std;

typedef 	pair<int, int> 			ii;
typedef 	vector<int> 			vi;
typedef 	vector<ii>			vii;


#define 	TRvii(c, it) 			for(vii:: iterator it = (c).begin(); it != (c).end; ++it)
#define 	REP(i, a, b)			for(int i = int(a); i < int(b); ++i)
#define		ll				long long
#define 	pb				push_back
#define 	mp				make_pair
#define		FF				first
#define 	SS				second
#define 	all(x)				(x).begin(), (x).end()
#define 	INF				1e18 + 5;

inline void pilot() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("a.in", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

const int N = 105;

vi a(N);

int main() {
	pilot();
	int n;
	cin >> n;
	int z = 0, one = 0;
	REP(i, 1, n+1){
		cin >> a[i];
		if(a[i] == 0) z++; else one++;
	}
	int maxi = INT_MIN;
	REP(i, 1, n+1)
		REP(j, i, n+1) {
			int ones = 0;
			int on = one;
			for(int k = i; k <= j; k++) {
				if(a[k] == 0) ones++; else on--;

			}
			maxi = max(maxi, on + ones);

		}

	cout << maxi << endl;
}



