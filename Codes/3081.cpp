#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define emp emplace
#define fi first
#define se second
#define INF 0x3f3f3f3f
typedef long long ll;
typedef pair<int,int> ii;

int n;
string s;
int Z[1123456];

void genZ() {
	int l = 0, r = 0;
	for (int i = 1; i < n; i++) {
		if (i <= r) Z[i] = min(Z[i-l], r-i+1);
		while (Z[i]+i < n && s[Z[i]+i] == s[Z[i]]) Z[i]++;
		if (r < i+Z[i]-1) l = i, r = i+Z[i]-1;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin >> s;
	n = s.size();

	genZ();

	vector<int> suf;
	int msuf = 0, mmid = 0;
	for (int i = 1; i < n; i++) {
		if (Z[i] == n-i) {
			suf.eb(Z[i]);
			mmid = max(mmid, Z[i]-1);
		} else {
			mmid = max(mmid, Z[i]);
		}
	}

	sort(suf.rbegin(), suf.rend());

	for (auto x : suf) {
		if (x <= mmid) {
			for (int k = n-x; k < n; k++) cout << s[k];
			cout << endl;
			return 0;
		}
	}

	cout << "Just a legend" << endl;

	return 0;
}
