#include <cstdio>
#include <algorithm>
int N, K, a[100001];
long long O[100001];
struct engine
{
	int l, r, cnt[100001];
	long long ans;
	long long operator () (int L, int R)
	{
		while (l < L)
			ans -= --cnt[a[++l]];
		while (l > L)
			ans += cnt[a[l--]]++;
		while (r > R)
			ans -= --cnt[a[r--]];
		while (r < R)
			ans += cnt[a[++r]]++;
		return ans;
	}
}
get;
void LittleFairyMY(int al, int ar, int ql, int qr)
{
	if (qr - ql <= 1)
		return;
	int qm = ql + qr >> 1;
	int am = 0;
	long long wm = 1LL << 60;
	for (int i = al; i <= ar; i++)
	{
		long long w_new = O[i] + get(i, qm);
		if (w_new < wm)
		{
			am = i;
			wm = w_new;
		}
	}
	O[qm] = std::min(O[qm], wm);
	LittleFairyMY(al, am, ql, qm);
	LittleFairyMY(am, ar, qm, qr);
}
void BigFairyNBC(int l, int r)
{
	if (l == r)
		return;
	int m = l + r >> 1;
	int ll = l, lr = m, rl = m + 1, rr = r;
	BigFairyNBC(rl, rr);
	LittleFairyMY(ll, lr, rl - 1, rr + 1);
	BigFairyNBC(ll, lr);
}
int main()
{
	scanf("%d%d", &N, &K);
	for (int i = 1; i <= N; i++)
		scanf("%d", a + i);
	for (int i = 1; i <= N; i++)
		O[i] = 1LL << 50;
	for (int i = K; i; i--)
		BigFairyNBC(0, N);
	printf("%lld\n", O[N]);
	return 0;
}
