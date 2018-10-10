#include <bits/stdc++.h>
#pragma GCC optimize("O3")
 
typedef long long ll;
 
#define x first
#define y second
#define point pair<ll, ll>
 
	
using namespace std;
			 
const ll N = 5e3 + 3, M = 1e5 + 3, BIG = (ll)1e18 + 3, MOD = 1e9 + 7, P = 'z' - 'a' + 1, K = 4;
const double PI = 3.14159265359;
 
// mt19937 gen(time(NULL));
 
int sum(int a) {
	int ans = 0;
	while (a > 0) {
		ans += a % 10;
		a /= 10;
	}
	return ans;
} 

int main () {
	// freopen("accounts.in", "r", stdin), freopen("accounts.out", "w", stdout);
	// freopen("a.in", "r", stdin), freopen("a.out", "w", stdout);
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int k, a = 19, i = 1;
	cin >> k;
	while (i < k) {
		++a;
		while (sum(a) != 10) {
			++a;
		}
		++i;
	}
	cout << a;
	
	return 0;
}