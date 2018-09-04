#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;

// z[i] - length of the longest prefix of s that is also a prefix of s[i..n-1]
vector<int> z_function(const string &s) {
	int n = s.size();
	vector<int> z(n, 0);
	int l = 0, r = 0;
	fori(i, 1, n) {
		if(i <= r) {
			z[i] = min(z[i - l], r - i + 1);
		}
		while(z[i] + i < n && s[z[i] + i] == s[z[i]]) {
			z[i]++;
		}
		if(r < i + z[i] - 1) {
			l = i, r = i + z[i] - 1;
		}
	}
	return z;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;

	vector<int> z = z_function(s);

	int n = s.size();

	int best_middle = 0;
	fori(i, 1, n) {
		best_middle = max(best_middle, min(z[i], n - i - 1));
	}

	int ans = -1;
	fori(i, 1, n) {
		if(z[i] == n - i && best_middle >= z[i]) {
			ans = max(ans, n - i);
		}
	}

	cout << (ans != -1 ? s.substr(0, ans) : "Just a legend") << '\n';

	return 0;
}
