#include <stdio.h>

int main() {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	a--, b--;
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int pow = 0, st = 1;
	while (st < n) {
		st *= 2;
		pow++;
	}
	int left = 0, right = pow;
	while (left < right - 1) {
		int y = left + (right - left) / 2;
		if (a / (1 << y) == b / (1 << y)) {
			right = y;
		} else {
			left = y;
		}
	}
	if (right == pow) {
		printf("Final!");
	} else {
		printf("%d", right);
	}
	return 0;
}
