#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <bitset>

int n, m;

int isperfect(int x)
{
	int re = 0;

	while (x)
	{
		re += x % 10;
		x /= 10;
	}

	if (re == 10) return 1;
	return 0;
}

int main()
{
	scanf("%d", &n);

	m = 18;
	while (n)
	{
		++m;
		if (isperfect(m)) --n;
	}

	printf("%d\n", m);

	return 0;
}