#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<queue>
#include<vector>
#define fast std::ios::sync_with_stdio(false)
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
using namespace std;
const int MX = 2e6 + 7;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
ll a[MX];
int main(int argc, char const *argv[])
{
	fast;
	ll n,m,k;
	ll ans = 0;
	cin >> n >> m >> k;
	for(int i = 1;i <= m;++i)
	{
		cin >> a[i];
	}
	ll r = k;
	ll cnt = 0;
	ll i = 1;
	while(i <= m)
	{
		if(a[i] <= r){
			cnt++;
			i++;
			if(i == m + 1) ans++;
		}
		else if(a[i] > r && !cnt){
			if((a[i] - r) % k == 0)
				r += k;
			else
				r += ((a[i] - r) / k + 1) * k;
		}
		else if(a[i] > r){
			r += cnt;
			cnt = 0;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}