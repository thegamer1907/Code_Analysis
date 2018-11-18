#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

const int NMAX = 110000, KMAX = 21;
const long long INF = 10000000000L;

int N, K;
int number[NMAX], cnt[NMAX];
long long delta, f[KMAX][NMAX];

//[p + 1, l]
void solve(int level, int l, int r, int p, int q)
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
	for(i = p + 1, pos = p, ans = f[level - 1][p] + delta;i <= q && i < mid;i += 1)
	{
		cnt[number[i]] -= 1;
		delta -= cnt[number[i]];
		if(f[level - 1][i] + delta <= ans)
		{
			ans = f[level - 1][i] + delta;
			pos = i;
		}
	}
	f[level][mid] = ans;
	//printf("f[%d][%d]: %d, pos:%d\n", level, mid, ans, pos);
	for(i -= 1;i > pos;i -= 1)
	{
		delta += cnt[number[i]];
		cnt[number[i]] += 1;
	}
	delta += cnt[number[mid + 1]];
	cnt[number[mid + 1]] += 1;
	solve(level, mid + 1, r, pos, q);
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
	solve(level, l, mid - 1, p, pos);
}

int main()
{
	int i;
	scanf("%d %d", &N, &K);
	for(i = 1;i <= N;i += 1)
	{
		scanf("%d", &number[i]);
		f[0][i] = INF;
	}
	for(i = 1;i <= K;i += 1)
	{
		cnt[number[i]] += 1;
		solve(i, i, N, i - 1, N);
		cnt[number[i]] -= 1;
	}
	printf("%I64d\n", f[K][N]);
	exit(0);
}
