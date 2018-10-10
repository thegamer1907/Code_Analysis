#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define TEST ""
#define push_back pb
#define make_pair mp
#define first ff
#define second ss
#include <cassert>
#include <iostream>
#include <cstdlib>
#include <cstdio>
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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vi a(n + 1, 0), b(n + 1, 0);
	for (int i = 0; i < s.size(); i++) {
	    if (s[i] == 'a') {
	        a[i + 1] = a[i] + 1;
	        b[i + 1] = b[i];
	    }
	    else {
	        a[i + 1] = a[i];
	        b[i + 1] = b[i] + 1;
	    }
	}
	int mx = 0;
	for (int i = 0; i < n; i++) {
	    int l = i, r = n - 1;
	    int cur = -1;
	    while (l <= r) {
	        int c = (l + r) / 2;
	        if (a[c + 1] - a[i] <= k) {
	            cur = c;
	            l = c + 1;
	        }
	        else {
	            r = c - 1;
	        }
	    }
	    mx = max(mx, cur - i + 1);
	}
	for (int i = 0; i < n; i++) {
	    int l = i, r = n - 1;
	    int cur = -1;
	    while (l <= r) {
	        int c = (l + r) / 2;
	        if (b[c + 1] - b[i] <= k) {
	            cur = c;
	            l = c + 1;
	        }
	        else {
	            r = c - 1;
	        }
	    }
	    mx = max(mx, cur - i + 1);
	}
	cout << mx << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	solve();

	return 0;
}