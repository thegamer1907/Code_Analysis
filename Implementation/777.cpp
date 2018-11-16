#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define push_back pb
#define make_pair mp
#define MULTITEST int _test_no; cin >> _test_no; while (_test_no-- > 0)
#define first ff
#define second ss
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cassert>
#include <cstring>
#include <cmath>
#include <ctime>
#include <string>
#include <vector> 
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef long double ld;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

void solve() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--) {
		for (int i = n - 1; i > 0; i--) {
			if (s[i - 1] == 'B' && s[i] == 'G') {
				swap(s[i], s[i - 1]);
				i--;
			}
		}
	}
	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#elif ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	solve();

	return 0;
}