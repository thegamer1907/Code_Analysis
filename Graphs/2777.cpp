#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3 + 10;
bool mark[maxn];
int n, m, v;

int main(){
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		++mark[a];
		++mark[b];
	}
	for (int i = 1; i <= n; ++i)
		if (!mark[i]) {
			v = i;
			break;
		}
	cout << n - 1 << '\n';
	for (int i = 1; i <= n; ++i)
		if (i != v)
			cout << v << ' ' << i << '\n';
	return 0;
}
