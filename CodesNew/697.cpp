#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; string s;
	set<string> a, b, ab;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) {
		cin >> s;
		a.insert(s);
	}
	for(int i = 0; i < m; i++) {
		cin >> s;
		if(a.find(s) != a.end()) {
			a.erase(s);
			ab.insert(s);
		}
		else b.insert(s);
	}
	if(a.size() > b.size()) printf("YES");
	else if(a.size() + 1 < b.size()) printf("NO");
	else {
		if(ab.size()&1 && a.size() == b.size()) printf("YES");
		else printf("NO");
	}
}
