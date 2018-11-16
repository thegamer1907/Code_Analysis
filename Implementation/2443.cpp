#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char **argv) {
	int n, k;
	scanf("%d%d", &n, &k);
	int can = 240 - k, res = 0;
	for (int i = 1; i <= n && can - i * 5 >= 0; ++i) {
		++res;
		can -= i * 5;
	}
	printf("%d\n", res);
	return 0;
}
