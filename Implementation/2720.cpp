#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define _CRT_SECURE_NO_WARNINGS
#define INF 1e18
#define endl "\n"
#define check cout << "fk" << endl;
#define tests int T;cin>>T;
#define PI 3.14159265358979323846
#define H(q,r) (q)*m + (r)
#define F(i,a,b) for(int i=(a);i<(b);i++)
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
template <typename T>
using vec3 = array<T, 3>;
template <typename T>
using vec2 = array<T, 2>;
template <typename T, size_t _bits>
using mat2d = array<array<T, _bits>, _bits>;

int main() {
	FASTIO;
	int n;
	cin >> n;
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		ans[temp - 1] = i + 1;
	}
	for (auto a : ans) cout << a << " ";
	cout << endl;
	return 0;
}