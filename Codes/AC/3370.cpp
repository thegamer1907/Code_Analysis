#pragma GCC optimize("O3")
#pragma loop_opt(on)
#include<bits/stdc++.h>
#define int long long
#define debug(a) cout << #a << " = " << a << endl;
#define endl '\n'
#define REP(i,j,k) for(int i = j; i < k; i++)
#define pb emplace_back
#define IOS ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int n;
inline bool che(int x)
{
	int k = n, cnt = 0;
	while(k > 0)
	{
		cnt += min(k,x);
		k -= min(k,x);
		k -= k/10;
	}
	if(cnt >= n/2+n%2) return true;
	else return false;
}
signed main()
{
	cin >> n;
	int l = 1, r = n;
	while(r-l > 1)
	{
		int mid = (r+l)>>1;
		if(che(mid)) r = mid;
		else l = mid;
	}
	if(che(l)) cout << l;
	else cout << r;
}