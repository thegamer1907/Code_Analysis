#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxp 10000001
#define maxpr 1000000

ll tag[maxp / 64 + 1], pr[maxpr], cnt, f[maxpr], mat[maxp];
vector<ll> p[maxp];

int main()
{
	ll n, i, k, h = sqrt(maxp), m, l, r, a, x;
	bool flag;
	for(i = 3; i <= h; i += 2)
		if(!(tag[i / 64] & (1LL << (i % 64))))
			for(k = i * i; k < maxp; k += 2 * i)
				tag[k / 64] |= 1LL << (k % 64);
	pr[++cnt] = 2;
	mat[2] = cnt;
	for(i = 3; i < maxp; i += 2)
		if(!(tag[i / 64] & (1LL << (i % 64))))
		{
			pr[++cnt] = i;
			mat[i] = cnt;
		}
	scanf("%lld", &n);
	while(n--)
	{
		scanf("%lld", &x);
		a = x;
		if(mat[x])
		{
			f[mat[x]]++;
			continue;
		}
		if(p[x].size())
		{
			for(k = 0; k < p[x].size(); k++)
				f[p[x][k]]++;
			continue;
		}
		flag = false;
		for(k = 1; pr[k] * pr[k] <= a; k++)
			if(a % pr[k] == 0)
			{				
				while(a % pr[k] == 0)
					a /= pr[k];
				if(p[a].size())
				{
					for(h = 0; h < p[a].size(); h++)
						p[x].push_back(p[a][h]);
					p[x].push_back(k);
					flag = true;
					break;
				}
				p[x].push_back(k);
			}
		if(a > 1 && !flag)
			p[x].push_back(mat[a]);
		for(k = 0; k < p[x].size(); k++)
			f[p[x][k]]++;
	}
	for(i = 2; i <= cnt; i++)
		f[i] += f[i - 1];
	scanf("%lld", &m);
	while(m--)
	{
		scanf("%lld %lld", &l, &r);
		i = lower_bound(pr + 1, pr + cnt + 1, l) - pr;
		k = upper_bound(pr + 1, pr + cnt + 1, r) - pr;
		printf("%lld\n", f[k - 1] - f[i - 1]);
	}
	return 0;
}