#include <bits/stdc++.h>

using namespace std;

string s, t;

int main() {
	cin >> s >> t;
	reverse(t.begin(), t.end());
	if (s == t) printf("YES\n");
	else printf("NO\n");
	return 0;
}
