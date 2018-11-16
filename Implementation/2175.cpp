#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using ui = unsigned int;

ll const mod = 1e9 + 9;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr), srand(time(0));
	int n; cin >> n;
	int x = 0, y = 0, z = 0;
	while (n--) {
		int p, q, r; cin >> p >> q >> r;
		x += p, y += q, z += r;
	}
	if (!x && !y && !z) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}