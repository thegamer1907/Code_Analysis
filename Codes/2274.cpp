#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e7 + 1;

int spf[N];
vector<int> f(N, 0), sum(N, 0);
vector<int> p;

void sieve()
{
	for(int i=0;i<N;++i)
		spf[i] = i;
	for(int i=2;i<N;++i)
	{
		if(spf[i] == i)p.push_back(i);
		for(int j = 0;j<p.size() && 1ll*i*p[j] < N; ++j)
		{
			spf[i*p[j]] = p[j];
			if(i%p[j] == 0)break;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	sieve();
	int x[n];
	for(int i=0;i<n;++i)
		scanf("%d", &x[i]);
	for(int i=0;i<n;++i)
	{
		int num = x[i];
		while(num != 1)
		{
			int k = spf[num]; f[k]++;
			while(num%k ==0)num/=k;
		}
	}
	sum[0] = 0;
	for(int i=0;i<=N;++i)
		sum[i] = sum[i-1] + f[i];
	int m;
	scanf("%d", &m);
	while(m--)
	{
		int l, r;
		scanf("%d %d", &l, &r);
		ll res = 0;
		if(l >= N && r >=N)
			res =0;
		else if(r >=N)
			res = sum[N-1] - sum[l-1];
		else res = sum[r] - sum[l-1];
		printf("%lld\n", res);
	}
	return 0;
}