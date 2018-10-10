#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
const char dflt[] = "Just a legend";

int n;
char s[N];
bitset<N> exist;
int pre[N];

int main() {
	scanf("%s", s);
	n = strlen(s);
	if (n < 3) {
		printf("%s\n", dflt);
		return 0;
	}
	for (int i=1; i<n; i++) {
		pre[i] = pre[i-1];
		while (pre[i] && s[pre[i]] != s[i])
			pre[i] = pre[pre[i]-1];
		if (s[pre[i]] == s[i])
			pre[i]++;
		if (i < n-1)
			exist.set(pre[i]);
	}
	while (pre[n-1]) {
		if (exist.test(pre[n-1])) {
			s[pre[n-1]] = 0;
			printf("%s\n", s);
			return 0;
		}
		pre[n-1] = pre[pre[n-1]-1];
	}
	printf("%s\n", dflt);

	return 0;
}