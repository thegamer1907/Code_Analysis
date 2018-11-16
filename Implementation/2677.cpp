#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int a[105];
	for (int i = 1; i <= n; i++) {
		int x; scanf("%d", &x);
		a[x] = i;
	}
	
	for (int i = 1; i <= n; i++) printf("%d ", a[i]); puts("");
	
	return 0;	
}
