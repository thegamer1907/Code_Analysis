#define _USE_MATH_DEFINES

#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <unordered_set>
#include <climits>
#include <ctime>

#define esle if

using namespace std;
using ll = long long;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;

void solve() {
	string pass;
	getline(cin, pass);
	int n;
	scanf("%d\n", &n);
	vector<string> words(n);
	for (string & s : words) {
		getline(cin, s);
		if (s == pass) {
			cout << "YES";
			return;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (words[i][1] == pass[0] && words[j][0] == pass[1]) {
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

#ifdef LOCAL
	cerr << double(clock()) / CLOCKS_PER_SEC << " sec" << endl;
#endif
	return 0;
}