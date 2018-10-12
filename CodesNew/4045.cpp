#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <stdlib.h>
#include <functional>
#define ll long long
#define llu unsigned long long
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
using namespace std;
const int MAX = 1e5 + 10;
const int mod = 1e9 + 7;
int N, M, K;
ll A[2 * MAX], B[2 * MAX];


int main()
{
	int i, j, k, x, y, u, v, n, m, a, b, TC, t, q;
	ll num;
	scanf("%d%d", &N, &K);

	for (i = 1; i <= N; ++i) {
		scanf("%lld", &num);
		A[i] = A[i - 1] + num;
	}
	ll cum = 0;
	for (i = 1; i <= K; ++i) {
		scanf("%lld", &B[i]);
		int ans;
		auto it = upper_bound(A + 1, A + 1 + N, cum + B[i]);
		if (it == A + 1 + N) {
			ans = N;
			cum = 0;
		}
		else {
			ans = N - (it - A - 1);
			cum += B[i];
		}
		printf("%d\n", ans);
	}

}