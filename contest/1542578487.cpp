#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define SZ 107

int OO = 1e9;

int n;
string s[305], pr[305], sf[305];
bool c[305][13][4100];

string fex(string x) {
	return (x.size() > 12 ? x.substr(0, 12) : x);
}

string bex(string x) {
	return (x.size() > 12 ? x.substr(x.size() - 12, 12) : x);
}

void cal(int j, int k) {
	pr[j] = fex(s[j]);
	sf[j] = bex(s[j]);
	if (s[j].size() < k)
		return;
	int nm = 0;
	for (int i = 0; i < k; i++) {
		nm *= 2;
		nm += (s[j][i] - '0');
	}
	nm -= (s[j][k - 1] - '0');
	for (int i = k - 1; i < s[j].length(); i++) {
		nm += (s[j][i] - '0');
		c[j][k][nm] = 1;
		nm -= (s[j][i - k + 1] - '0') << (k - 1);
		nm *= 2;
	}
}

int query(int in, int x, int y) {
	int res = 0;
	s[in] = sf[x] + pr[y];
	for (int k = 1; k < 13; k++) {
		for (int j = 0; j < (1 << k); j++)
			c[in][k][j] = c[x][k][j] + c[y][k][j];
		cal(in, k);
		bool v = 1;
		for (int j = 0; j < (1 << k); j++)
			if (!c[in][k][j])
				v = 0;
		if (v)
			res = k;
	}
	pr[in] = pr[x];
	if (pr[x].size() < 12)
		pr[in] = fex(pr[x] + pr[y]);
	sf[in] = sf[y];
	if (sf[y].size() < 12)
		sf[in] = bex(sf[x] + sf[y]);
	return res;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		for (int j = 1; j < 13; j++)
			cal(i, j);
	}
	int m,a,b;
	cin >> m;
	for(int i=1; i<=m; i++){
		cin >> a >> b;
		cout << query(n+i,a,b) << "\n";
	}
	return 0;
}
