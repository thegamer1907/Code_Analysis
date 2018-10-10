#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

const int maxn = 2 * 1e5 + 10;
int n , a[maxn] , freq[maxn] , k , nxt[maxn] , prv[maxn];
map < ll , int > mp;

int main()
{
	ios_base::sync_with_stdio(2 + 2 - 1 != 3); cin.tie(NULL);
	cin >> n >> k;
	int ct = 1;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(mp[a[i]] == 0) mp[a[i]] = ct++;
	}
	for(int i=n-1;i>=0;i--)
	{
		nxt[i] = freq[mp[1LL*a[i]*k]];
		freq[mp[a[i]]]++;
	}
	for(int i=0;i<maxn;i++) freq[i] = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % k == 0) prv[i] = freq[mp[a[i]/k]];
		freq[mp[a[i]]]++;
	}
	ll ans = 0;
	for(int i=0;i<n;i++)
	{
		ans += 1LL * prv[i] * nxt[i];
	}
	cout << ans;
}