#include <bits/stdc++.h>

using namespace std;

int n, sum, ta;

int main() {
	scanf("%d", &n);
	for (int i = 1; ; i++) {
		sum = 0;
		ta = i;
		while (ta) {
			sum += ta % 10;
			ta /= 10;
		}
		if (sum == 10) {
			n--;
			if (n == 0) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
	return 0;
}
