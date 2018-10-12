#include <cstdio>

typedef long long llint;

bool check(llint, llint);

int main() {
	llint n;
	scanf("%lld", &n);

	llint lo = 1, hi = n;
	while(lo <= hi) {
		llint mid = (lo + hi) / 2;
		if(check(n, mid)) hi = mid - 1;
		else lo = mid + 1;
	}

	printf("%lld\n", lo);
	return 0;
}

bool check(llint n, llint num) {
	llint half = (n + 1) / 2;
	llint sum = 0;
	while(n > 0) {
		if(n >= num) {
			sum += num;
			n -= num;
		}
		else {
			sum += n;
			n = 0;
		}
		n -= (n / 10);
	}

	return sum >= half;
}
