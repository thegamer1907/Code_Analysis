#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 100;
int n, t, l, r, temp, ans[N], freq[N];
long long int CS[N];
bool arr[N];

void seive() {
	arr[0] = arr[1] = true;
	for (int i = 2; i < N; i++) {
		if (!arr[i]) {
			ans[i] += freq[i];
			for (int j = i + i; j < N; j += i) {
				ans[i] += freq[j];
				arr[j] = true;
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &temp);
		freq[temp]++;
	}
	scanf("%d", &t);
	seive();
	for (int i = 1; i < N; i++) {
		CS[i] = CS[i - 1] + ans[i];
	}
	while (t--) {
		scanf("%d%d", &l, &r);
		l = min(10000000, l);
		r = min(10000000, r);
		printf("%lld\n", CS[r] - CS[l - 1]);
	}

	return 0;
}
