#include <bits/stdc++.h>

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

#define for0(i , v) for (int i = 0 ; i < v.size() ; i++)
#define for1(i , n) for (int i = 1 ; i <= n ; i++)
#define AIDS ios_base::sync_with_stdio(0)
#define pb push_back
#define pp pop_back 
#define sz(a) a.size()
#define all(x) x.begin() , x.end()
#define f first
#define s second
#define mp make_pair
#define ld long double
#define ll long long
#define pii pair<int, int>
#define in insert

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

const int N = 1e6 + 3;
const ll INF = 1e18 + 100;
const int inf = 1e9 + 100;
const int MOD = 1e9 + 7;
using namespace std;

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

int main () {
	string s;
	cin >> s;
	int n;
	cin >> n;
	string a[n + 1];
	for (int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			if ((a[j][0] == s[1] && a[i][1] == s[0]) || (a[j][1] == s[0] && a[i][0] == s[1]) || a[i] == s || a[j] == s) {
				cout << "YES";
				exit(0);
			}
		}
	}
	cout << "NO";
}
