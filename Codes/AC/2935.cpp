#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 10;
int n, z[maxn], ans, l, r;
string s;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> s;
	n = s.size();
	for (int i = 1; i < n; ++i)
		if (i > r) {
			l = r = i;
			while (r < n && s[r] == s[r - l])
				++r;
			z[i] = r-- - l;
		}
		else {
			int k = i - l;
			if (z[k] < r - i + 1)
				z[i] = z[k];
			else {
				l = i, ++r;
				while (r < n && s[r] == s[r - l])
					++r;
				z[i] = r-- - l;
			}
		}
	int mx = 0;
	for (int i = 1; i < n; ++i) {
		if (z[i] == n - i && mx >= n - i) {
			ans = n - i;
			break;
		}
		mx = max(mx, z[i]);
	}
	s.resize(ans);
	if (s.empty())
		s = "Just a legend";
	cout << s << '\n';
	return 0;
}
