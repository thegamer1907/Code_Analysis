#include"iostream"
#include"algorithm"
#include"cstdio"
#include"string"
#include"cstring"
using namespace std;
int main()
{
	int n, sum = 0, sum1 = 0, m, a[1000], b[1000];
	scanf("%d%d", &n, &m);
	memset(a, -1, sizeof(a));
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int g = 0;
	for (int i = 0; i<n - 1; i++)
	{
		if (a[i] % 2 == 0) {
			sum++;
			if (sum == sum1)
			{
				b[g] = abs(a[i + 1] - a[i]);
				sum = 0; sum1 = 0; g++;
			}
		}
		else
		{
			sum1++;
			if (sum == sum1)
			{
				b[g] = abs(a[i + 1] - a[i]);
				sum = 0; sum1 = 0; g++;
			}
		}
	}
	sort(b, b + g); int i;
	for (i = 0; i<g; i++)
	{
		m -= b[i];
		if (m<0)break;
	}
	printf("%d\n", i);
	return 0;
}