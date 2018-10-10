#include "bits/stdc++.h"
using namespace std;

const int N = 1e5 + 5;
char in[N];
int A[N], B[N];

int main() {
	int n, k; scanf("%d %d", &n, &k);
	scanf("%s", in);
	for(int i = 0; i < n; ++i) {
		if(in[i] == 'a') A[i + 1]++;
		else B[i + 1]++;
		A[i + 1] += A[i];
		B[i + 1] += B[i];
	}
	int res = 0;
	for(int i = 0; i < n; ++i) {
		int j = i;
		for(int b = n; b >= 1; b /= 2) {
			while(j + b <= n and A[j + b] - A[i] <= k) j += b;
		}
		res = max(res, j - i);
	}
	for(int i = 0; i < n; ++i) {
		int j = i;
		for(int b = n; b >= 1; b /= 2) {
			while(j + b <= n and B[j + b] - B[i] <= k) j += b;
		}
		res = max(res, j - i);
	}
	printf("%d\n", res);
}