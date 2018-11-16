#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <string>

#define fi(n) for (int i = 0; i < n; i++)
#define fj(n) for (int j = 0; j < n; j++)
#define fv(v, n) for (int v = 0; v < n; v++)
#define fii(n) for (int i = 1; i <= n; i++)
#define fjj(n) for (int j = 1; j <= n; j++)
#define fvv(v, n) for (int v = 1; v <= n; v++)
#define fid(n) for (int i = n; i >= 0; i--)
#define fjd(n) for (int j = n; j >= 0; j--)
#define fvd(v, n) for (int v = n; v >= 0; v--)
#define fim(n, m) for (int i = m; i < n; i++)
#define fjm(n, m) for (int j = m; j < n; j++)
#define fvm(v, n, m) for (int v = m; v < n; v++)

#define iter(v) for (auto it = v.begin(); it != v.end(); it++)
#define riter(v) for (auto it = v.rbegin(); it != v.rend(); it++)

#define ll long long
#define ull unsigned long long
#define db double
#define vi vector <int>
#define si set <int>
#define mi map <int, int>
#define v_v(typo) vector <typo> v
#define pii pair <int, int>
#define m_m(t1, t2) map <t1, t2> m
#define s_s(typo) set <typo> s

#define b_n int n; cin >> n
#define b_k int k; cin >> k
#define b_d int d; cin >> d
#define b_2 b_n; b_k
#define b_3 b_2; b_d
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define m_p make_pair
#define INF 1000000007
#define LINF (ll)1000000000000000000
#define sqr(n) ((n) * (n)) 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifdef Stalin
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	b_3;
	int L = 0;
	int ans = 0;
	int N = n;
	if (d < k) {
		swap(k, d);
	}
	while (N != 1) {
		N /= 2;
		L++;
	}
	n /= 2;
	int b = n;
	while (true) {
		b /= 2;
		if (k <= n && n < d) {
			if (ans) {
				cout << L - ans;
			} else {
				cout << "Final!";
			}
			return 0;
		} else if (k > n) {
			n += b;
		} else if (d <= n) {
			n -= b;
		}
		ans++;
	}
	return 0;
}
