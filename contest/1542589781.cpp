#include <bits/stdc++.h>

using namespace std;

bool ck (string s, multiset <string> w) {
	int n = s.size();
	s += 'A';
	for (int i = 0; i < n; i+=2) {
		string t = s.substr(i,2);
		multiset <string> :: iterator it = w.lower_bound(t);
		if (it == w.end()) return 0;
		string g = *it;
		bool m = t[0] == g[0];
		if (i+1 < n) m = m && t[1] == g[1];
		if (!m) return 0;
	}
	return 1;
}

string S [110];
int main () {
	string s;
	int n;
	cin >> s >> n;

	multiset <string> w, SV;

	for (int i = 0; i < n; i++) {
		cin >> S[i];
		w.insert(S[i]);
	}
	if (ck(s,w)) {
		puts("YES");
		return 0;
	}
	string f = s.substr(1);
	for (int i = 0; i < n; i++) {
		if (S[i][1] == s[0]) {
			if (ck(f,w)) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}
