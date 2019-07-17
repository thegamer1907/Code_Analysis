// -*- coding: utf-8 -*-
// @Date    : 2019-07-12 22:57:10

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

template<typename T>
ostream& operator << (ostream& os, const vector<T>& v)
{
	for(auto i : v)
		os << i << " ";
	return os;
}

template<typename T>
ostream& operator << (ostream& os, const set<T>& v)
{
	for(auto i : v)
		os << i << " ";
	return os;
}

const ll N = 1e5 + 233;
ll b[N], n, m, k;
ll dist[N], a[N];

// #define local
int main()
{
#ifdef local
	freopen("data.in", "r", stdin);
	freopen("ans.out", "w", stdout);
#endif
	// printf("1000000000000000000 100000 2\n");
	// for(ll i = 2; i <= 100001; ++i)
	// 	printf("%d ", i);
	// printf("\n");
	scanf("%I64d%I64d%I64d", &n, &m, &k);
	for(ll i = 0; i < m; ++i)
		scanf("%I64d", b+i);
	if(k == 1)
		return 0*printf("%d\n", m);
	for(ll i = 1; i < m; ++i)
		if(b[i] - b[i-1] <= k*2)
			dist[i] = b[i] - b[i-1];
		else
			dist[i] = (b[i] - b[i-1]) % k + k;
	ll fix = b[0] / k * k;
	a[0] = b[0] - fix + k;
	for(ll i = 1; i < m; ++i)
		a[i] = a[i-1] + dist[i];
	// for(ll i = 0; i < m; ++i)
	// 	printf("%I64d ", a[i]);
	// printf("\n");
	ll cnt = 0;
	ll cur = 0;
	ll p = k + 1;
	while(cur < m)
	{
		ll tmp = 0;
		while(a[cur] < p && cur < m)
		{
			++tmp;
			++cur;
		}
		if(tmp)
		{
			++cnt;
			p += tmp;
		}
		else
			p += k;
		if(cnt == m)
			break;
	}
	printf("%d\n", cnt);
	return 0;
}