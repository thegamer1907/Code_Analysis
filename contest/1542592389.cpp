#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pii		pair<int, int>
#define fi		first
#define se		second
#define up(i,j,n)	for (int i = j; i <= n; i++)

const int MAXN = 105;

int N;
pii a[MAXN], cur;
char s[5];

int main(){
	scanf("%s", s);
	cur = make_pair(s[0] - 'a', s[1] - 'a');
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%s", s);
		a[i] = make_pair(s[0] - 'a', s[1] - 'a');
	}
	up (i, 1, N) if (a[i] == cur) {
		puts("YES");
		return 0;
	}
	up (i, 1, N) up(j, 1, N) 
		if (a[i].se == cur.fi && a[j].fi == cur.se) {
			puts("YES");
			return 0;
		}
	puts("NO");
	return 0;
}
