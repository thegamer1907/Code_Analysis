#include<bits/stdc++.h>

#define _USE_MATH_DEFINES
#define ll long long
#define ins Not Needed Thing
#define ull unsigned long long
#define ld long double
#define Accepted 0
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define sz(x) (int)(x.size())
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define emp What is it
#define SORRY FUL Accepted 
#define dimash the top one
#define I wish 
#define you be a little more calm
#define SpeedForce ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

const double eps = 0.000001;
const ld pi = acos(-1);
const int maxn = 1e7 + 9;
const int mod = 1e9 + 7;
const ll MOD = 1e18 + 9;
const ll INF = 1e18 + 123;
const int inf = 2e9 + 11;
const int minn = 1e5 + 9;
const int N = 5e3 + 123;                                          
const int NN = 5e5 + 123;
const int PRI = 555557;
const int pri = 997;

int tests = 1;
int n, m, k, a[NN][5], cnt, ans[NN];
vector <int> v;

inline void Solve () {
	cin >> n >> k;
	for (int i = 1; i <= n; i ++) {
		cnt = 0;
		for (int j = 1; j <= k; j ++) {
			cin >> a[i][j];
			cnt = cnt * 10 + a[i][j];
		}
		//ans[i] = cnt;
		v.pb(cnt);
	}

	sort(all(v));
	v.resize(unique(all(v)) - v.begin());
	if(!v[0]) {
		cout << "YES";
		exit(0);
	}

	for (int i = 0; i < v.size(); i ++) {
		for (int j = i + 1; j < v.size(); j ++) {
			int sum = v[i] + v[j];
			bool ch = 1;
			while(sum) {
				if(sum % 10 > 1)
					ch = 0;
				sum /= 10; 
			}
			if(ch) {
				cout << "YES";
				exit(0);
			}
		}
	}

	cout << "NO";
}

int main () {
	SpeedForce;
//	freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);	
	// cin >> tests;
	while(tests --) {
		Solve ();
		// Ee Zadrot
	}	
}