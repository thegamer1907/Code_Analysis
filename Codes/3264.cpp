#include <bits/stdc++.h>
using namespace std;

int n, ans, a;
long long c = 1e18+7;

int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		int b = ((a-i+n-1)/n*n+i);
		if(c > b) c = b, ans = i+1;
	}
	printf("%d", ans);
}
