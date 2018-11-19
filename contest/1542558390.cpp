#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
int n, k;
int f[N];
int bit[10];

int check(int i, int j) {
	memset(bit, 0, sizeof bit);
	for (int s = 0; s < k; s++)
		if (i & (1 << s))
			bit[s]++;
	for (int s = 0; s < k; s++)
		if (j & (1 << s))
			bit[s]++;
	for (int s = 0; s < k; s++)
		if (bit[s] > 1)
			return 0;
	return 1;
}
int main() {
	//freopen("input.txt", "r", stdin);
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int x = 0;
		for (int a, j = 0; j < k; j++) {
			scanf("%d", &a);
			if (a)
				x |= 1 << j;
		}
		f[x]++;
		if(!x){
			puts("YES");
			return 0;
		}
	}

	for (int i = 0; i < (1 << k); i++)
		for (int j = i + 1; j < (1 << k); j++) {
			if (check(i, j) && f[j] && f[i]) {
				puts("YES");
				return 0;
			}
		}

	puts("NO");
}
