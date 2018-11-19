#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define pii pair < int , int >

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int N = 1e5 + 123;
const int mod = 1e9 + 7;
const int INF = 1e9 + 1;
const ll INFL = 1e18 + 1;
const double eps = 1e-9;
const double pi = acos(-1.0);

int main() {

	ios_base::sync_with_stdio (0);
	cin.tie (0); 	

	int cnt = 0;
	int cnt1 = 0;
	char a, b;
	int n;
	cin >> a >> b >> n;
	
	for(int i = 1; i <= n; i ++) {
		char x, y;
		cin >> x >> y;
		if(x == a && y == b) {
			cout << "YES";
			return 0;
		}
		if(x == b) {
			cnt = 1;
		}
		if(y == a) {
			cnt1 = 1;
		}
	}
	if(cnt&&cnt1) cout << "YES";
	else cout << "NO";

	return 0;	
}