#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <array>
#include <iomanip>
#include <stack>
#include <bitset>
#include <climits>

using namespace std;


#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()

typedef long long li;

template<typename T>
ostream& operator << (ostream& os, vector<T>& a) {
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << ' ';

	return os;
}

const double EPS = 1e-9;
const double PI = 3.1415926535897;

const int N = 3;

int main() {

#ifdef _DEBUG
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	sync;


	string s;
	cin >> s;

	vector<int> need(N);
	forn(i, s.size()) {
		if (s[i] == 'B')
			need[0]++;

		if (s[i] == 'S')
			need[1]++;

		if (s[i] == 'C')
			need[2]++;
	}

	vector<int> n(N);
	forn(i, N) {
		cin >> n[i];

		if (need[i] == 0)
			n[i] = 0;
	}

	vector<int> p(N);
	forn(i, N)
		cin >> p[i];

	long long r;
	cin >> r;

	long long ans = 0;

	while (r > 0 && (n[0] > 0 || n[1] > 0 || n[2] > 0)) {
		forn(i, N) {
			n[i] -= need[i];
			r -= max(0, -n[i] * p[i]);
			n[i] = max(0, n[i]);
		}

		if (r >= 0)
			ans++;
	}

	long long sum = 0;
	forn(i, N)
		sum += need[i] * p[i];

	ans += max(r, 0ll) / sum;

	cout << ans << endl;
	return 0;
}