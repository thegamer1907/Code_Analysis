
#include <bits/stdc++.h>
 
using namespace std;
 
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ifl(i,a,b) for(ll i=a;i<b;i++)
#define dfl(i,a,b) for(ll i=a-1;i>=b;i--)
#define get_string() getline(cin,s)		//for inputting string with spacebars in between
#define gcd(a,b) __gcd(a,b)
#define PLL pair<ll,pair<ll,ll> >

const ll N = 1e7+1;
const ll mod = 1e9+7;

ll cnt[N];
bool not_prime[N];
ll pre[N];
vector <ll> v;

void primes()
{
	ll value = 1e7+1;
	ll sq_value = sqrt(value);
	for(ll i=2;i<=sq_value;i++)
	{
		if(!not_prime[i])
		{
			for(ll j=i*i;j<=value;j+=i)				// j can be started from i*i rather than i*2
			{
				not_prime[j] = true;
			}
		}
	}
	ifl(i,2,1e7+1)
	{
		if(!not_prime[i])
		{
			v.pb(i);
		}
	}
}

int main()
{
	speed;
	primes();
	ll n;
	cin>>n;
	ifl(i,0,n)
	{
		ll x;
		cin>>x;
		cnt[x]++;
	}
	ifl(i,0,v.size())
	{
		ll x=v[i];
		for(ll j=x;j<=1e7;j+=x)
		{
			pre[x] += cnt[j];
		}
	}
	ifl(i,1,1e7+1)
	{
		pre[i] += pre[i-1];
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		if(x>1e7)
		{
			x=1e7;
		}
		if(y>1e7)
		{
			y=1e7;
		}
		cout<<pre[y]-pre[x-1]<<endl;
	}
	return 0;
}