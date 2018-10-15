#include <stdio.h>
#define nmax 200010

using namespace std;

typedef long long int ll;

int n, q, index;
int a[nmax];

ll last = 0;

ll sum[nmax], k[nmax];

int search(int l, int r, ll x)
{
	int sol = l - 1;
	
	while (l <= r) {

		int m = (l + r) / 2;

		if ((sum[m] - last) - sum[index - 1] <= x) { sol = m; l = m + 1; }
		else
			r = m - 1;
	}

	return sol;
}

int main()
{
	scanf("%d %d", &n, &q);

	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

	for (int i = 1; i <= q; i++) scanf("%I64d", &k[i]);

	for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i];

	index = 1;

	for (int i = 1; i <= q; i++) {

		int next_index = search(index, n, k[i]);

		if (next_index == n) index = 1, last = 0; else {

			last = k[i] - ((sum[next_index] - last) - sum[index - 1]);
			index = next_index + 1;
		}

		printf("%d\n", n - index + 1);

	}

	return 0;
}