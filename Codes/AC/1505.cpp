#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;
typedef string str;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef stringstream strs;

#define X first
#define Y second
#define PB push_back
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
#define smax(a,b) a=max(a,b)
#define smin(a,b) a=min(a,b)
#define SZ(a) ((ll)a.size())
#define ER(a) cout << #a << ' ' << a << '\n'


const ll M=2e5+5,LG=20,inf=1e18+5,mod=1e9+7;

ll n,s;
ll a[M];
ll b[M];
ll check(ll k)
{
	if (k==0)
		return 0;
	For(i,0,n)
	{
		b[i]=a[i]+(i+1)*k;
	}
	sort(b,b+n);
	ll cnt=0;
	For(i,0,k)
	{
		cnt+=b[i];
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> s;
	For(i,0,n)
	{
		cin >> a[i];
	}
	ll l=0,r=n+1;
	while (r-l>1)
	{
		ll mid=(l+r)/2;
		if (check(mid)<=s)
			l=mid;
		else
			r=mid;
	}
	cout << l << ' ' << check(l) << '\n';
}
