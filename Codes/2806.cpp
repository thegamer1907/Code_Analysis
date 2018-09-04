#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 1000005;

char s[maxn];
int z1[maxn];

int ok[maxn];

int main()
{
	int n;
	scanf("%s", s);
	n = strlen(s);
	for (int i = 1, l = 0, r = 0; i < n; i++) {
		if (i < r) {
			z1[i] = min(z1[i - l], r - i);
		}
		while (i + z1[i] < n && s[z1[i]] == s[i + z1[i]]) {
			z1[i]++;
		}
		if (i + z1[i] > r) {
			l = i;
			r = i + z1[i];
		}
	}
	
	for (int i = 1; i < n; i++) {
		if (i + z1[i] == n) {
			ok[z1[i]] = i;
		}
	}
	
	int mx = 0;
	for (int i = 1; i < n - 1; i++) {
		int len = z1[i];
		if (i + z1[i] == n) len--;
		mx = max(mx, len);
	}
	
	while (mx && !ok[mx]) mx--;
	
	if (!mx) {
		printf("Just a legend");
		return 0;
	}
	
	for (int i = ok[mx]; i < ok[mx] + mx; i++) {
		printf("%c", s[i]);
	}
}
