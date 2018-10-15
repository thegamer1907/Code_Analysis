#include <bits/stdc++.h>
using namespace std;

int n, a[1000010], k, s = 0, l = 0, r = 0, len = 0, L = 1, R = 0;
int main() {
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	while(r < n) {
		s += (not a[r]);
		while(s > k) s -= (not a[l++]);
		if(len < r - l + 1) len = r - l + 1, L = l, R = r;
		r++;
	}
	printf("%d\n", R - L + 1);
	if(L <= R) {
		for(int i = 0; i < L; i++) printf("%d ", a[i]);
		for(int i = L; i <= R; i++) printf("1 ");
		for(int i = R+1; i < n; i++) printf("%d ", a[i]);
	}
	else for(int i = 0; i < n; i++) printf("%d ", a[i]);
}