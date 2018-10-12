#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 10000001
#define all(x) x.begin(),x.end()
ll fpow(ll n, ll k, ll p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
ll inv(ll a, ll p = mod) {return fpow(a, p - 2, p);}
#define MAXN 10000001 
ll spf[MAXN]; 
map<ll,ll> prime_ind;
ll number_of_primes=1;
vector<ll> primes;
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
          spf[i] = i; 
  
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        { 
            for (ll j=i*i; j<MAXN; j+=i) 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 

    for(ll i=2;i<MAX;i++)
    {
    	if(spf[i]==i)
    	{
    		prime_ind[i]=number_of_primes;
    		number_of_primes++;
    		primes.pb(i);
    	}
    }
} 
int main()
{
	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	sieve();
	ll n;cin>>n;
	ll arr[n],pref[number_of_primes+1];vector<ll> primes_hash(number_of_primes+1,0);
	memset(pref,0,sizeof(pref));
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		ll temp=arr[i];
		while(temp!=1)
		{
			ll cur_spf=spf[temp];
			primes_hash[prime_ind[cur_spf]]++;
			while(spf[temp]==cur_spf)
				temp/=spf[temp];
		}
	}

	pref[1]=primes_hash[1];
	for(ll i=2;i<number_of_primes+1;i++)
	{
		pref[i]=pref[i-1]+primes_hash[i];
	}

	ll q;cin>>q;
	while(q--)
	{
		ll l,r;cin>>l>>r;
		ll l1=lower_bound(all(primes),l)-primes.begin();
		ll r1=lower_bound(all(primes),r)-primes.begin();
		if(primes[r1]!=r)
			r1--;

		l1++;r1++;
		if(l1==primes.size()+1)
			cout<<0<<endl;
		else
			cout<<pref[r1]-pref[l1-1]<<endl;
	}

} 