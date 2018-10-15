#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
ll n, a[510000];
int main()
{
	scanf("%lld", &n);
	for (ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort (a, a+n);
	ll now = 0;
	for (ll i=0; i<n; i++)
	{
		if (a[i] >= 2*a[now]) now ++;
	}
	ll temp = min(n / 2, now);
	printf("%lld", n - temp);
	return 0;
}