#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

const int NMAX = 110000, KMAX = 21;
const long long INF = 10000000000L;

int N, K;
int number[NMAX], cnt[NMAX];
long long delta, f[2][NMAX], *pre, *cur;

//[p + 1, l]
void solve(int l, int r, int p, int q)
{
	int i, pos;
	int mid = (l + r)>>1;
	long long ans;
	if(l > r)
		return;
	for(i = l + 1;i <= mid;i += 1)
	{
		delta += cnt[number[i]];
		cnt[number[i]] += 1;
	}
	for(i = p + 1, pos = p, ans = pre[p] + delta;i <= q && i < mid;i += 1)
	{
		cnt[number[i]] -= 1;
		delta -= cnt[number[i]];
		if(pre[i] + delta <= ans)
		{
			ans = pre[i] + delta;
			pos = i;
		}
	}
	cur[mid] = ans;
	//printf("f[%d][%d]: %d, pos:%d\n", level, mid, ans, pos);
	for(i -= 1;i > pos;i -= 1)
	{
		delta += cnt[number[i]];
		cnt[number[i]] += 1;
	}
	delta += cnt[number[mid + 1]];
	cnt[number[mid + 1]] += 1;
	solve(mid + 1, r, pos, q);
	cnt[number[mid + 1]] -= 1;
	delta -= cnt[number[mid + 1]];

	for(;i > p;i -= 1)
	{
		delta += cnt[number[i]];
		cnt[number[i]] += 1;
	}
	for(i = mid;i > l;i -= 1)
	{
		cnt[number[i]] -= 1;
		delta -= cnt[number[i]];
	}
	solve(l, mid - 1, p, pos);
}

int main()
{
	int i;
	scanf("%d %d", &N, &K);
	pre = f[0];
	cur = f[1];
	for(i = 1;i <= N;i += 1)
	{
		scanf("%d", &number[i]);
		pre[i] = INF;
	}
	for(i = 1;i <= K;i += 1)
	{
		cnt[number[i]] += 1;
		solve(i, N, i - 1, N);
		cnt[number[i]] -= 1;
		swap(pre, cur);
	}
	printf("%I64d\n", pre[N]);
	exit(0);
}
