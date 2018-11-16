#include "bits/stdc++.h"


#define pb push_back
#define mp make_pair
#define len(v) ((int)v.size())
#define mt make_tuple
#define f(i, n) for (int i = 0; i < (n); i++)


using namespace std;


typedef long long ll;
typedef pair<int, int> pii;


signed main() {
	int n, a, b;
	cin >> n >> a >> b;
	a--;
	b--;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = 0;
	}
	v[a] = 1;
	v[b] = 1;
	int k = 1;
	while (len(v) > 2) {
		vector<int> _new;
		for (int i = 0; i < len(v); i += 2) {
			if (v[i] + v[i + 1] == 2) {
				cout << k << endl;
				return 0;
			}
			_new.pb(v[i] + v[i + 1]);
		}
		v = _new;
		k++;
	}
	cout << "Final!" << endl;
}