#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using db = double;
#define pb push_back
#define fir first
#define sec second

int n, m;
bool a[1 << 4];

bool check() {
	int u = (1 << m) - 1;
	if (a[0])
		return true;
	for (int i = 0; i <= u; ++i) if (a[i])
		for (int j = 0; j <= u; ++j) if (a[j])
			if (!(i & j))
				return true;
	return false;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int t = 0;
		for (int j = 0; j < m; ++j) {
			int x;
			scanf("%d", &x);
			t |= x << j;
		}
		a[t] = true;
	}
	
	puts(check() ? "YES" : "NO");
	
	return 0;
}
