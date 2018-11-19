#include <bits/stdc++.h>

#define ll long long
#define MAXN 100005

using namespace std;

bool ans;
int k;
map<int, bool> mapp;
map<int, bool> mark;

void dfs(int tt) {
	if (ans) {
		return ;
	}	
	if (mapp[tt]) {
		ans = true;
	}
	for (int i = 0; i < 4; i++) {
		if (tt & (1 << i)) {
			dfs(tt ^ (1 << i));
		}
	}
}

int main() {
	int n, qq;
	ans = false;
	scanf("%d %d", &n, &k);
	int tmp = (1 << k) - 1;
	int tot = 0;
	for (int i = 0; i < n; i++) {
		int p = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &qq);
			if (qq) {
				p = p | (1 << j);
			}
		}
		if (!p) {
			tot++;
		}
		mapp[p] = true;
	}
	if (tot) {
		printf("YES\n");
		return 0;
	}
	for (int i = 0; i < tmp; i++) {
		if (mapp[i]) {
			dfs(i ^ tmp);
			if (ans) {
				printf("YES\n");
				return 0;
			}
		}
	}
	puts("NO");
}
