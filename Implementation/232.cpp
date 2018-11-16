#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <iomanip>
#include <cassert>

#define endl "\n"
#define mp make_pair
#define pii pair<int, int>

typedef long long LL;

using namespace std;

template <typename T>
T sqr(T x) {
	return x * x;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#endif
	int n, a , b;
	cin >> n >> a >> b;
	if (a > b)
		swap(a, b);
	vector <int> t;
	for (int i = 1; i <= n; i++)
		t.push_back(i);
	int cnt = 1;
	while (true) {
		vector <int> nxt;
		if ((int)t.size() == 2) {
			cout << "Final!";
			return 0;
		}
		for (int i = 0; i < (int)t.size(); i += 2) {
			if (t[i] == a && t[i + 1] == b) {
				cout << cnt;
				return 0;
			}
			if (t[i] == a || t[i + 1] == a) {
				nxt.push_back(a);
				continue;
			}
			if (t[i] == b || t[i + 1] == b) {
				nxt.push_back(b);
				continue;
			}
			nxt.push_back(t[i]);
		}
		t = nxt; cnt++;
	}
}