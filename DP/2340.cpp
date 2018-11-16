#include <bits/stdc++.h>
using namespace std;

const int N = 102;

int n;
string s;
bool dp[N][9];
bool vis[N][9];

bool calc(int idx, int cur) {
	if (cur == 0)
		return 1;
	if (idx == n)
		return 0;
	bool &ret = dp[idx][cur];
	if (vis[idx][cur])
		return ret;
	vis[idx][cur] = 1;
	ret = calc(idx + 1, cur);
	ret |= calc(idx + 1, (cur * 10 + (s[idx] - '0')) % 8);
	return ret;
}

void build(int idx, int cur) {
	if (cur == 0)
		return;
	if (idx == n)
		return;
	if (calc(idx + 1, cur)) {
		build(idx + 1, cur);
	} else {
		printf("%c", s[idx]);
		build(idx + 1, (cur * 10 + (s[idx] - '0')) % 8);
	}
}

int main() {
	cin >> s;
	n = s.size();
	if (calc(0, 8)) {
		puts("Yes");
		build(0, 8);
		puts("");
	} else {
		puts("No");
	}
	return 0;
}
