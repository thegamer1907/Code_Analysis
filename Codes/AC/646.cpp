#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
using namespace std;

int N;
double M;
const int maxn = 5e3 + 10;
double A[maxn];

bool ck(int n) {
	int cnt = 0;
	while (n) {
		cnt = cnt + (n % 10);
		n /= 10;
	}
	return cnt == 10;
}

int main() {
	int K;
	scanf("%d", &K);
	for (int i = 19; ; i++) {
		if (ck(i)) {
			K--;
		}
		if (!K) {
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
}