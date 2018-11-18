/* Alisher Rakhimberdi  */
/*    Hala Madrid      */
#include <algorithm>
#include <iostream>
#include <iomanip>    
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <deque>
#include <ctime>
#include <stack>
#include <set>
#include <map> 

#define f first
#define s second
#define ppb pop_back
#define pb push_back
#define mp make_pair
#define ll long long
#define int long long
#define ld long double
#define ull unsigned long long     
#define sr(x) sort(x.begin(), x.end())
#define rv(x) reverse(x.begin(), x.end())
#define speed ios_base::sync_with_stdio(false)

using namespace std;

const int mod = 1e9 + 7;
const ld INF = 1e9 + 123;
const int inf = 1e9 + 123;
const int maxn = 2e5 + 123;
const ld pi = 3.141592653589793238462643;

string s;
int n;
string t[maxn];
vector < char > v, ve;

main() {
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	cin >> s;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> t[i];
	}
	for (int i = 1; i <= n; ++i) {
		if (t[i][0] == s[0] && t[i][1] == s[1]) {
			cout << "YES";
			return 0;
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (t[i][0] == s[1] && t[j][1] == s[0]) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}