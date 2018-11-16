#include <cstdio>
#include <cstring>
char s[101];
int L;
int dp[100][8][2], trace[100];
bool rec(int p, int r, bool used) {
	if (p == L)
		return !r && used;
	int& ret = dp[p][r][used];
	if (ret != -1) return ret;
	ret = 0;
	if (rec(p + 1, r, used)) {
		trace[p] = 0;
		return ret = 1;
	}
	if (rec(p + 1, (r * 10 + s[p] - '0') % 8, 1)) {
		trace[p] = 1;
		return ret = 1;
	}
	return ret;
}
int main() {
	memset(dp, -1, sizeof dp);
	scanf("%s", s);
	L = strlen(s);
	if (L == 1 && (s[0] - '0') % 8) puts("NO");
	else {
		if (rec(0, 0, 0)) {
			puts("YES");
			for (int i = 0; i<L; i++)
				if (trace[i]) printf("%c", s[i]);
		}
		else puts("NO");
	}

	return 0;
}