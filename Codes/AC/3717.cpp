#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string s;
long long a, b, c;
long long x, y, z;
long long r;
long long A, B, C;

int process(long long t) {
	long long p = max(0LL, (A * t - a)) * x + max(0LL,(B * t - b)) * y + max(0LL, (C * t - c)) * z;
	return p <= r;
}
int main(void)
{
	cin >> s;
	scanf("%lld%lld%lld", &a, &b, &c);
	scanf("%lld%lld%lld", &x, &y, &z);
	scanf("%lld", &r);

	long long len = s.length();

	for (int i = 0; i < len; i++) {
		if (s[i] == 'B') A++;
		if (s[i] == 'S') B++;
		if (s[i] == 'C') C++;
	}

	long long left = 0, right = 1e15;

	while (left < right) {
		long long mid = (left + right + 1) / 2;
		if (process(mid)) left = mid;
		else right = mid - 1;
	}

	printf("%lld", left);
	return 0;
}