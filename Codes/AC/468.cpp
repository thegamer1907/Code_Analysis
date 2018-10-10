#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N = 1e5 + 5;
const ll mod = 1e9 + 7;

vector<ll> all;

void bt(int sum, int len, string s) {
	if (len == 10) {
		if (sum == 10) {
			all.push_back(stoll(s));
		}
	} else {
		for (int i = 0; i <= 9; ++i) {
			if (sum + i <= 10) {
				bt(sum + i, len + 1, s + to_string(i));
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(0);

	bt(0, 0, "");

	sort(all.begin(), all.end());

	int k; cin >> k;

	cout << all[k - 1] << endl;

    return 0;
}
