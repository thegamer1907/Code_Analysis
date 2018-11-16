#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 1;
string s;
int f[MAXN];

int main() {
	int n;
	cin >> s;
	n  = s.size();

	f[1] = 0;
	for(int i = 2; i <= n; i++)
		if(s[i - 1] == s[i - 2]) 
			f[i] = f[i - 1] + 1;
		else f[i] = f[i - 1];

	int q, l, r;
	scanf("%d", &q);
	while(q--) {
		scanf("%d %d", &l, &r);
		printf("%d\n", f[r] - f[l]);
	}

	return 0;
}