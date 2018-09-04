#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int a[MAXN], soma[MAXN], n;

void pre(void)
{
	soma[0] = a[0];
	for (int i = 1; i < n; i++)
		soma[i] = soma[i-1]+a[i];
}

int busca_binaria(int x)
{
	int ini = 0, fim = n-1;

	while (ini <= fim)
	{
		int mid = (ini+fim)/2;

		if (mid == 0 && soma[mid] >= x)
			return mid+1;
		else if (mid == 0)
		{
			ini = mid+1;
			continue;
		}

		if (soma[mid] >= x && soma[mid-1] < x)
			return mid+1;
		else if (soma[mid] >= x && soma[mid-1] >= x)
			fim = mid-1;
		else if (soma[mid] < x)
			ini = mid+1;
	}
}

int main(void)
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	pre();

	int q;
	scanf("%d", &q);

	for (int i = 0; i < q; i++)
	{
		int x;
		scanf("%d", &x);

		printf("%d\n", busca_binaria(x));
	}
}