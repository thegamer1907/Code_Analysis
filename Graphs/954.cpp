#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, t;
int a[100000];
bool vis[100000];

int main() {
	scanf("%d%d", &n, &t);
	for (int i = 1; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	vis[1] = true;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) continue;
		else vis[i + a[i]] = true;
	}
	if (vis[t]) puts("YES");
	else puts("NO");
	
	return 0;
}