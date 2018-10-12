#include <iostream>

using namespace std;

const int SIZE = 100000;

int arr[SIZE];

int main(int argc, char** argv) {
	int ans, n, i, p, z;

	scanf("%d", &n);
	z = 1000000000;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		z = min(z, arr[i]);
	}

	for (i = 0; i < n; i++) {
		arr[i] -= z;
	}

	ans = 0;
	p = z % n;
	for (i = 0; i < n; i++) {
		if (arr[ (p + i) % n ] <= i) {
			ans = (p + i) % n;
			break;
		}
	}

	printf("%d\n", ans + 1);

	return 0;
}
