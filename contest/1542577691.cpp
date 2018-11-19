#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int N, K;
int num[16];
int main()
{
	fill(num, num + 16, 0);
	scanf("%d%d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		int t, n = 0;
		for (int j = 0; j < K; j++)
		{
			scanf("%d", &t);
			n = n * 2 + t;
		}
		num[n] ++;
	}
	int ans = 0;
	for (int i = 0; i < 1 << K; i++)
		for (int j = 0; j < 1 << K; j++)
			if ((i & j) == 0 && num[i] && num[j])
				ans = 1;
	printf("%s\n", ans ? "YES" : "NO");
	return 0;
}