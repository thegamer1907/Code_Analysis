#include <bits/stdc++.h>
using namespace std;

char s[501];
set<string> A, B, C;

bool check() {
	int at = 0;
	for (auto it = C.begin(); it != C.end(); ++it) {
		if (at == 0 && A.size() == 0)
			return false;
		if (at == 1 && B.size() == 0)
			return true;
		A.erase(*it);
		B.erase(*it);
		at ^= 1;
	}
	if ((at == 0 && B.size() >= A.size()) || (at == 1 && B.size() > A.size()))
		return false;
	return true;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%s", s);
		A.insert(s);
	}
	for (int i = 0; i < m; ++i) {
		scanf("%s", s);
		B.insert(s);
		if (A.find(s) != A.end())
			C.insert(s);
	}
	if (check())
		puts("YES");
	else
		puts("NO");
	return 0;
}