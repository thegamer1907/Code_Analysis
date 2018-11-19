#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
const int N = 100 + 10;
string s, a[N];
int n;
int main() {
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (s == a[i]) return puts("YES"), 0;
	}
	string tmp;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			tmp = "";
			tmp += a[i][1];
			tmp += a[j][0];
			if (s == tmp) return puts("YES"), 0;

		}
	}
	puts("NO");
	return 0;
}