#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const int MX = 1e6 + 10;

char s[MX], t[MX];

char NOT(char c) {
	if (c == '1') return '0';
	return '1';
}

int main() {
	int n;
	ignore = scanf("%d", &n);
	ignore = scanf("%s", s);
	ignore = scanf("%s", t);
	
	int ans = 0;
	
	for (int i = 0; i < n - 1; i++) {
		if (s[i] != s[i+1] and s[i] != t[i] and s[i+1] != t[i+1]) {
			swap(s[i], s[i+1]);
			ans++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) { 
			ans++;
			s[i] = NOT(s[i]);
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}
