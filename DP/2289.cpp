#include <bits/stdc++.h>
using namespace std;

int a[100010];
bool vis[100010];


int main() {	
	int t, n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	int cnt = 0;
	memset(vis, 0, sizeof vis);
	for(int i = n; i > 0; i--) {
		if(!vis[a[i]]) {
			vis[a[i]] = true;
			cnt++;
		}
		a[i] = cnt;
	}
	while(m--) {
		scanf("%d", &t);
		printf("%d\n", a[t]);
	}
	return 0;
}