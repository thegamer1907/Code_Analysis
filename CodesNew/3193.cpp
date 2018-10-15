#include <cstdio>
int N, K, a[300001], s[300001], O, l, r;
int main()
{
	scanf("%d%d", &N, &K);
	for (int i = 1, g = 0; i <= N; i++)
	{
		scanf("%d", a + i);
		s[i] = !a[i] + s[i - 1];
		while (s[i] - s[g] > K)
			g++;
		if (i - g > O)
		{
			O = i - g;
			l = g + 1;
			r = i;
		}
	}
	for (int i = l; i <= r; i++)
		a[i] = 1;
	printf("%d\n", O);
	for (int i = 1; i <= N; i++)
		printf("%d%c", a[i], " \n"[i == N]);
	return 0;
}
