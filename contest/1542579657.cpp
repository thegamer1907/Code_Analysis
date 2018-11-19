#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

int t1, t2;
bool cant[20];
bool h[20];

void dfs(int x) {
	if(x == t2) {
		puts("YES");
		exit(0);
	}
	h[x] = 1;
	int nxt = (x + 1) % 12;
	int bef = (x + 12 - 1) % 12;
	if(!h[bef] and !cant[bef])
		dfs(bef);
	if(!h[nxt] and !cant[x])
		dfs(nxt);
}

int main() {

// #ifdef D
// 	freopen("in.txt", "r", stdin);
// 	freopen("out.txt", "w", stdout);
// #endif

	int h, m, s;

	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

	t1 %= 12;
	t2 %= 12;

	if(s or m)
		cant[h % 12] = 1;
	else {
		cant[h - 1] = 1;
		cant[h % 12] = 1;
	}

	if(s or m % 5) {
		cant[m / 5] = 1;
	}
	else {
		cant[m / 5] = 1;
		cant[(m / 5 + 12 - 1) % 12] = 1;
	}

	if(s % 5) {
		cant[s / 5] = 1;
	}
	else {
		cant[s / 5] = 1;
		cant[(s / 5 + 12 - 1) % 12] = 1;
	}

	// for(int i = 0; i < 12; i++)
		// printf("cant[%d] = %d\n", i, cant[i]);

	dfs(t1);

	puts("NO");

    return 0;

}

