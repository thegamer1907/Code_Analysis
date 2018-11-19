#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
const int N = 0;
const int MOD = 1000000000 + 7;
const int INF = 1000000000 + 13;

int main () {
	vector<string> v;
	string s; cin >> s;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		string kappa; cin >> kappa;
		v.push_back(kappa), v.push_back(kappa);
		if (kappa == s)
			return !printf("%s\n", "YES");
	}
	for (int i = 0; i < v.size(); ++i)
		for (int j = i + 1; j < v.size(); ++j)
			if (v[i][1] == s[0] and v[j][0] == s[1])
				return !printf("%s\n", "YES");
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
		for (int j = i + 1; j < v.size(); ++j)
			if (v[i][1] == s[0] and v[j][0] == s[1])
				return !printf("%s\n", "YES");
	return !printf("%s\n", "NO");
}