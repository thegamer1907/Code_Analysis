#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	string s;
	cin >> n >> t >> s;

	vector<int> mod;
	while (t > 0) {
		t--;
		mod = vector<int> (n, 0);
		for (int i = 0; i < n-1; i++) {
			if (!mod[i] && s[i] == 'B' && s[i+1] == 'G') {
				s[i] = 'G';
				s[i+1] = 'B';
				mod[i] = mod[i+1] = 1;
			}
		}
	}
	cout << s << endl;
	return 0;
}