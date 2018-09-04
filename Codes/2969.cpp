#include <bits/stdc++.h>
using namespace std;

int p1 = 239;
int p2 = 347;
int mod = (1 << 32);
int binpow(int a, int p)
{
	int ans = 1ll;
	for (int i = 20; i >= 0; i--)
	{
		ans = ans * ans;
		if (p & (1ll << i))
			ans = ans  * a;
	}
	return ans;
}


int main()
{
	char *s = new char[1000001];
	scanf("%s", s);
	int n = strlen(s);
	int h[n];
	h[0] = s[0] - 'a';
	for (int i = 1; i < n; i++)
	{
		h[i] = (h[i - 1] * p1 + s[i] - 'a');
	}
	int p[n];
	p[0] = 0;
	for (int i = 1; i < n; i++)
	{
		int l = 0;
		int r = n - i + 1;
		while (r - l > 1)
		{
			int mid = (r + l) >> 1;
			int h1 = (h[i + mid - 1] + mod - h[i - 1]  * binpow(p1, mid));
			if (h1 == h[mid - 1])
				l = mid;
			else
				r = mid;
		}
		p[i] = l;
	}
	int cnt[n + 1];
	for (int i = 0; i <= n; i++)
		cnt[i] = 0;
	for (int i = 0; i < n; i++)
		cnt[p[i]]++;
	for (int i = n - 1; i >= 0; i--)
		cnt[i] += cnt[i + 1];
	int len = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (p[n - i] != i)
			continue;
		if (cnt[i] >= 2)
		{
			len = i;
			break;
		}
	}
	if (len == 0)
		printf("Just a legend");
	else
	{
		for (int i = 0; i < len; i++)
			printf("%c", s[i]);
	}
	return 0;
}
