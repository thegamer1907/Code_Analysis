#include <bits/stdc++.h>
#define X 10000005
#define N 1000005
using namespace std;

int n, nprimo[X], v[N], ans[X], q, cnt[X];

void crivo()
{
	nprimo[1] = 1;

	for(int i = 2; i < X; i++)
	{
		if(!nprimo[i])
		{
			for(int j = 1; j*i < X ; j++)
			{
				if(j != 1)nprimo[i*j] = 1;

				ans[i] += cnt[i*j];
			}
		}
	}
}

vector<int> primes;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin>>n;

	for(int i = 1; i <= n; i++) cin>>v[i], cnt[v[i]] ++;

	crivo();

	for(int i = 2; i < X; i++) if(!nprimo[i]) primes.push_back(i);

	/*for(int i = 1; i <= n; i++)
	{
		if(!nprimo[v[i]])
		{
			ans[v[i]] ++;

			continue;
		}

		for(int j = 0; j < primes.size(); j++)
		{
			int p = primes[j];

			if(p > sqrt(v[i])) break;

			if(v[i]%p == 0)
			{
				ans[p] ++;

				int t = v[i]/p;

				if(!nprimo[t] && t != p && t > sqrt(v[i])) ans[t]++;
			}
		}
	}*/

	for(int i = 1; i < X; i++) ans[i] += ans[i - 1];

	cin>>q;

	for(int i = 1; i <= q; i++)
	{
		int a, b;

		cin>>a>>b;

		b = min(X - 1, b);

		a = min(X - 1, a);

		cout<<max(ans[b] - ans[a - 1], 0)<<"\n";
	}
}