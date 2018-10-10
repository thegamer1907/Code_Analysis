#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e7+7;
bool np[N];

int cnt[N];
long long pre[N];

void seive()
{
	np[0] = np[1] = 1;
	for (int i = 2; i < N; i++)
	{
		if (np[i]) continue;
		pre[i] += cnt[i];
		for (int j = 2 * i; j < N; j += i) pre[i] += cnt[j], np[j] = 1;
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]), cnt[a[i]]++;

	seive();

	for (int i = 1; i < N; i++)
		pre[i] += pre[i-1];

	int q;
	scanf("%d", &q);

	while (q--)
	{
		int st, en;
		scanf("%d %d", &st, &en);
		st = min(st, N-1);
		en = min(en, N-1);
		long long ans = pre[en] - pre[st-1];
		printf("%lld\n", ans);
	}

	return 0;
}