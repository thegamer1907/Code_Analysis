#include <cstdio>
using namespace std;
int n, k, last;
int main() {
	scanf("%d%d", &n, &k);
	last = 4 * 60 - k;
	for (int i = 1; i <= n; i++) {
		if (last - i * 5 >= 0) last -= i * 5;
		else {
			printf("%d\n", i - 1);
			return 0;
		}
	}
	printf("%d\n", n);
	return 0;
}