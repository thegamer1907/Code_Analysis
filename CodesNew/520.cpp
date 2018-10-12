#include<bits/stdc++.h>
#define hell 1000000007LL
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mk make_pair
#define fi                  first
#define se                  second
#define pii                 pair<int,int>
#define all(c)              c.begin(),c.end()
#define sz(c)               (int)c.size()
#define MAXN	10000005
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

ll spf[MAXN]; 
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (ll j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
  
// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
map<ll,ll> m1;
set<ll> s;
map<ll,ll> m2;
void pf(ll n)
{
	s.clear();
	while(n>1)
	{
		//cout<<n<<' '<<spf[n]<<endl;
		if(s.find(spf[n])==s.end())
		{
			s.insert(spf[n]);
			m1[spf[n]]++;
		}
		n/=spf[n];
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	sieve();
	rep(i,0,n)
	{
		ll x;
		cin>>x;
		pf(x);
	}
	ll cumm=0;
	for(auto x:m1)
	{
		cumm+=x.second;
		m2[(x.first)]=cumm;
	}
	int m;
	cin>>m;
	rep(i,0,m)
	{
		ll x,y;
		cin>>x>>y;
		ll ans;
		auto it1=m2.lower_bound(x);
		auto it2=m2.upper_bound(y);
		if(it1!=m2.begin()&&it2!=m2.begin())
		{
			it1--;
			it2--;
			ans=it2->second-it1->second;
		}
		else if(it2!=m2.begin())
		{
			it2--;
			ans=it2->second;
		}
		else
			ans=0;
		cout<<ans<<endl;
	}
	return 0;
}