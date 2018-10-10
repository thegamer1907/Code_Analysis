#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e7 + 1;

vector<ll> f(N, 0), cnt(N, 0);
bool check[N];

void sieve()
{
	for(int i=0;i<N;++i)
		check[i] = true;
	for(int i=2;i<N;++i)
		if(check[i])
			for(int j=i;j<N;j+=i)
			{
				check[j] = false; f[i] += cnt[j];
			}
	for(int i=1;i<N;++i)
		f[i] += f[i-1];
}

int main()
{
	int n;
	scanf("%d", &n);
	int x[n];
	for(int i=0;i<n;++i)
	{
		scanf("%d", &x[i]);
		cnt[x[i]]++;
	}
	sieve();
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
			res = f[N-1] - f[l-1];
		else res = f[r] - f[l-1];
		printf("%lld\n", res);
	}
	return 0;
}