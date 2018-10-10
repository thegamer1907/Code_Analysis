#include<bits/stdc++.h>
using namespace std;

typedef long long int Long;
typedef long double Double;
const int MAXN = 1e6 + 4;

char s[MAXN];
int FL[MAXN] = {0}, FR[MAXN] = {0},
	occ[MAXN] = {0},
	n, ans;

int main() {
	scanf("%s", s); n = strlen(s);

	ans = 0;
	for(int i = 1, border = 0; i < n; ++i) {
		while(border > 0 && s[i] != s[border])
			border = FL[border - 1];
		if(s[i] == s[border])
			++border;
		FL[i] = border;
	}

	reverse(s, s + n);
	for(int i = 1, border = 0; i < n; ++i) {
		while(border > 0 && s[i] != s[border])
			border = FR[border - 1];
		if(s[i] == s[border])
			++border;
		FR[i] = border;
	}
	reverse(FR, FR + n);

	for(int i = 1; i + 1 < n; ++i) {
		if(FR[i] == FL[i + FR[i] - 1]) {
			ans = max(ans, FR[i]);
		}
	}

	if(ans) {
		reverse(s, s + n);
		
		s[ans] = 0;
		puts(s);
	} else {
		puts("Just a legend");
	}
	return 0;
}
