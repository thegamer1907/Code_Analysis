#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char **argv) {
	ll n, k;
	scanf("%lld%lld", &n, &k);
	int can = 0;
	while ((k & 1) == 0) {
		++can;
		k >>= 1;
	}
	printf("%d\n", 1 + can);
	return 0;
}
