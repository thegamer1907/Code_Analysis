#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
int n, m, mx, a, sum;
int main() {    //////cnm
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++) {
		scanf("%d", &a);
		mx = max(mx, a);
		sum += a;
	}
	int ans = !((sum+m)%n) ? (sum+m)/n : (sum+m)/n+1;
	if(ans <= mx) printf("%d ", mx);
	else printf("%d ", ans);
	printf("%d\n", mx + m);
}