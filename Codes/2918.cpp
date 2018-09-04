#include<bits/stdc++.h>
using namespace std;

typedef long long int Long;
typedef long double Double;
const int MAXN = 1e6 + 4;

char s[MAXN];
int Z[MAXN], occ[MAXN] = {0}, occAtEnd[MAXN] = {0},
	n, ans, last;

int main() {
	scanf("%s", s); n = strlen(s);

	for(int i = 1, l = 0, r = 0; i < n; ++i) {
		Z[i] = max(0, min(Z[i - l], r - i + 1));
		while(Z[i] + i < n && s[Z[i]] == s[Z[i] + i]) {
			l = i;
			r = i + Z[i];
			++Z[i];
		}

		if(Z[i] + i == n)
			++occAtEnd[Z[i]];
		else
			++occ[Z[i]];
	}

	ans = 0;
	last = 0;
	for(int i = n; i > 0; --i) {
		if((occ[i] && occAtEnd[i]) || (occAtEnd[i] && last)) {
			ans = i;
			break;
		}

		if(occAtEnd[i] || occ[i])
			++last;
	}

	if(ans) {
		s[ans] = 0;
		puts(s);
	} else {
		puts("Just a legend");
	}

	return 0;
}
