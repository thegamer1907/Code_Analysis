#include <cstdio>
#include <bitset>
const int K = 13;
struct node
{
	int longer;
	std::bitset < 1 << K > mask; // longer = 1
	int L, R; // longer = 1
	int len, val; // longer = 0
	friend inline node operator + (const node &a, const node &b)
	{
		node res;
		if (a.longer)
		{
			res.longer = 1;
			if (b.longer)
			{
				res.mask = a.mask | b.mask;
				res.L = a.L;
				res.R = b.R;
				for (int i = 1; i < K; i++)
					res.mask.set(a.R >> i | (b.L & (1 << i) - 1) << K - i);
			}
			else
			{
				res.mask = a.mask;
				res.L = a.L;
				res.R = a.R >> b.len | b.val << K - b.len;
				for (int i = 1; i <= b.len; i++)
					res.mask.set(a.R >> i | (b.val & (1 << i) - 1) << K - i);
			}
		}
		else
		{
			if (b.longer)
			{
				res.longer = 1;
				res.mask = b.mask;
				res.L = a.val | (b.L & (1 << K - a.len) - 1) << a.len;
				res.R = b.R;
				for (int i = 1; i <= a.len; i++)
					res.mask.set(a.val >> a.len - i | (b.L & (1 << K - i) - 1) << i);
			}
			else
			{
				int len = a.len + b.len, val = a.val | b.val << a.len;
				if (len >= K)
				{
					res.longer = 1;
					res.mask.reset();
					res.L = val & (1 << K) - 1;
					res.R = val >> len - K;
					for (int i = 0; i <= len - K; i++)
						res.mask.set(val >> i & (1 << K) - 1);
				}
				else
				{
					res.longer = 0;
					res.len = len;
					res.val = val;
				}
			}
		}
		return res;
	}
	void read()
	{
		static char s[101];
		scanf("%s", s);
		len = 0;
		while (s[len])
			len++;
		if (len < K)
		{
			longer = 0;
			val = 0;
			for (int i = 0; i < len; i++)
				if (s[i] == '1')
					val |= 1 << i;
		}
		else
		{
			longer = 1;
			mask.reset();
			L = 0;
			for (int i = 0; i < K; i++)
				if (s[i] == '1')
					L |= 1 << i;
			mask.set(L);
			R = L;
			for (int i = 1, w = L; i <= len - K; i++)
			{
				w >>= 1;
				if (s[i + K - 1] == '1')
					w |= 1 << K - 1;
				mask.set(w);
				R = w;
			}
		}
	}
	bool check(int ans)
	{
		static int v[1 << K];
		for (int i = 0; i < 1 << ans; i++)
			v[i] = 0;
		if (longer)
		{
			for (int i = 0; i < 1 << K; i++)
				if (mask[i])
					v[i & (1 << ans) - 1] = 1;
			for (int i = 1; i <= K - ans; i++)
				v[R >> i & (1 << ans) - 1] = 1;
		}
		else
		{
			for (int i = 0; i <= len - ans; i++)
				v[val >> i & (1 << ans) - 1] = 1;
		}
		for (int i = 0; i < 1 << ans; i++)
			if (!v[i])
				return false;
		return true;
	}
	int answer()
	{
		int ans = K;
		while (ans && !check(ans))
			ans--;
		return ans;
	}
}
p[201];
int N, M;
int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		p[i].read();
	scanf("%d", &M);
	for (int i = N + 1, x, y; i <= N + M; i++)
	{
		scanf("%d%d", &x, &y);
		p[i] = p[x] + p[y];
		printf("%d\n", p[i].answer());
	}
	return 0;
}
