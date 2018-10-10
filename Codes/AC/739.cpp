#include <bits/stdc++.h>

#define rep(i, a, b) for (i = (a); i <= (b); i ++)

using namespace std;

typedef long long ll;

const int maxn = 1010, maxm = 1010;

int main() {
	int k, i, x, sum;
	scanf("%d", &k);
	rep(i, 19, 20000000) {
		for (x = i, sum = 0; x; sum += x % 10, x /= 10);
		if (sum == 10) {
			k --;
		}
		if (!k) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
