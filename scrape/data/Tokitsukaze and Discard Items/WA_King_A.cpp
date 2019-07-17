/*
* @Author: WA_King
* @Date:   2019-07-12 22:24:55
* @Last Modified by:   lcw
* @Last Modified time: 2019-07-12 23:22:43
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define met(s) memset(s, 0, sizeof(s))
const int MOD = 100000007;
const int MAXN = 1000000;
const int inf = 0x3f3f3f3f;
ll book[100005];
int main()
{
	//freopen("data.txt","r",stdin);
	ll n, m, k;
	scanf("%lld%lld%lld", &n, &m, &k);
	for (int i = 0; i < m; i++) scanf("%lld", &book[i]);
	sort(book, book + m);
	ll ans = 0, now = 0;
	int i = 0;
	while (i < m)
	{
		ll x = 0;
		while (i < m && book[i] - now <= k)
		{
			i++;
			x++;
		}
		if (x == 0) now = now + ((book[i] - now - 1) / k ) * k;
		else
		{
			now += x;
			ans++;
		}
	}
	printf("%lld\n", ans );
	return 0;
}