#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 101

char s[maxn];
ll br, sau, ch, nb, ns, nc, pb, ps, pc, sum;
bool ok(ll m)
{
	ll xb = max(0LL, m * br - nb);
	ll xs = max(0LL, m * sau - ns);
	ll xc = max(0LL, m * ch - nc);
	return xb * pb + xs * ps + xc * pc <= sum;
}

int main()
{
	ll n, i, l = 0, r, m, ret;
	scanf("%s %lld %lld %lld %lld %lld %lld %lld", s, &nb, &ns, &nc, &pb, &ps, &pc, &sum);
	n = strlen(s);
	for(i = 0; i < n; i++)
	{
		br += s[i] == 'B';
		sau += s[i] == 'S';
		ch += s[i] == 'C';
	}
	r = ((br ? pb * nb : 0) + (sau ? ps * ns : 0) + (ch ? pc * nc : 0) + sum) / (br * pb + sau * ps + ch * pc);
	while(l <= r)
	{
		m = (l + r) >> 1;
		if(ok(m))
		{
			ret = m;
			l = m + 1;
		}
		else
			r = m - 1;
	}
	printf("%lld", ret);
	return 0;
}