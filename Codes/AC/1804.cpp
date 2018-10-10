#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, m, k;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin>>n>>m>>k;

	if(n < m) swap(n, m);

	ll ini = 1, fim = n*m, mid, best = -1;

	while(fim >= ini)
	{
		mid = (ini + fim)/2;

		ll ans = 0;

		for(int i = 1; i <= n; i++) ans += min((ll)mid/i, m);

		if(ans >= k) fim = mid - 1, best = mid;

		else ini = mid + 1;
	}

	cout<<best<<"\n";
}