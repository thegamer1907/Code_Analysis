#include <bits/stdc++.h>

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define clr(dp,i) memset(dp,i,sizeof(dp))
#define opt     ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);


using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
const long long MOD = 1e9+7;
const ld pi = 3.14159265358979323846264338327950288;
//========================================

int main()
{
	ll n, m, k;
	cin >> n >> m >> k;
	ll x, y;
	cin >> x >> y;
	ll a[m], b[m], c[k], d[k];
	for(int i=0; i<m; i++)
	cin >> a[i];
	for(int i=0; i<m; i++)
	cin >> b[i];
	for(int i=0; i<k; i++)
	cin >> c[i];
	for(int i=0; i<k; i++)
	cin >> d[i];
	ll ans = 8e18;
	//cout << ans << endl;
	for(int i=0; i<m; i++)
	{
		if(b[i] > y)
		continue;
		ll mana = y - b[i];
		if(d[0] > mana)
		{
			ans = min(ans, ll(n * a[i]));
			continue;
		}
		ll s = 0, e = k-1;
		if(d[k-1] <= mana)
		{
			s = e;
		}
		while(s < e)
		{
			int mid = (s+e)/2;
			if(d[mid] <= mana)
			{
				s = mid;
				if(d[mid+1] > mana)
				break;
			}
			else
			e = mid;
		}
		ll tmp = n - c[s];
		tmp *= a[i];
		ans = min(ans, tmp);
	}
	
	ll mana = y;
	if(d[0] > mana)
	{
		ans = min(ans, ll(n * x));
	}
	else
	{
		int s = 0, e = k-1;
		if(d[k-1] <= mana)
		{
			s = e;
		}
		while(s < e)
		{
			int mid = (s+e)/2;
			if(d[mid] <= mana)
			{
				s = mid;
				if(d[mid+1] > mana)
				break;
			}
			else
			e = mid;
		}
		ll tmp = (n - c[s]) * x;
		ans = min(tmp, ans);
	}
	cout << ans << endl;
}