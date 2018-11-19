#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
const int N = 100000 + 10;
int n, k;
map<string, int > mp;
int main() {
	cin >> n >> k;

	if (n == 1) {
		int a;
		for (int i = 0; i < k; ++i) {
			cin >> a;
			if (a != 0) return puts("NO"), 0;
		}
		puts("YES");
		return 0;
	}

	string b, b2;
	vector<int> v;
	for (int i = 0, a; i < n; ++i) {
		b = "";
		for (int j = 0; j < k; ++j) {
			cin >> a;
			b += char(a + '0');
		}
		b2 = b;
		v.clear();
		for (int i = 0; i < b.size(); ++i) {
			if (b[i] == '0') {
				v.push_back(i);
				b[i] = '#';
			}
			if (b[i] == '1') b[i] = '0';
		}
		int cnt = v.size();
		for (int msk = 0, bit; msk < (1 << cnt); ++msk) {
			for (int j = 0; j < cnt; ++j) {
				bit = (msk >> j) & 1;
				b[v[j]] = char(bit + '0');
			}
			if (mp[b] != 0) {
				puts("YES");
				return 0;
			}
		}
		mp[b2] = 1;
	}

	puts("NO");

	return 0;
}