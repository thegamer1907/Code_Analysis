#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = 0;
	while (a > 0 && b > 0) {
		if (a < b) a += 3;
		else b += 3;
		a -= 2;
		b -= 2;
		ans++;
	}
	if (a < 0 || b < 0) ans--;
	printf("%d\n", ans);
}
