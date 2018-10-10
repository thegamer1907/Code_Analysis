#include<bits/stdc++.h>
using namespace std;
int K;

void dfs(int len, int sum, int d_sum)
{
	if (!K) return ;
	if (len)
		for (int i = 0; i <= 10 - d_sum; ++i)
			dfs(len - 1, sum * 10 + i, d_sum + i);
	else
		if (d_sum == 10)
			if (--K == 0)
				printf("%d\n", sum);
}

void Dfs(int p)
{
	for (int i = 1; i <= 9; ++i)
		dfs(p - 1, i, i);
	if (K)
		Dfs(p + 1);
}

int main()
{
	scanf("%d", &K);
	Dfs(2);
	return 0;
} 