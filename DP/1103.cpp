#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define mk make_pair
#define f(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define all(a) a.begin(),a.end()
#define upp(v,val) upper_bound(v.begin(),v.end(),val)
#define lower(v,val) lower_bound(v.begin(),v.end(),val)
#define test ll t;cin>>t; while(t--)
#define dbg(a,b) cout<<#a<<"="<<a<<endl<<#b<<"="<<b<<endl
#define speed() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define S second
#define F first
#define fm(it,m) for(it=m.begin();it!=m.end();it++)
#define ct_set(n) __builtin_popcount(n) // count no of set bits
#define INF 0x3f3f3f3f
#define endl '\n'
#define mod 1000000007
using namespace std;

bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

vector<ll> primes;

bool prime[10005];
void seive()
{
	mem(prime,1);
	prime[0]=0;
	prime[1]=0;
	for(ll i=2;i<=10000;i++)
	{
		if(prime[i]==1)
		{
			for(ll j=i*i;j<=10000;j+=i)
			prime[j]=0;
		}
	}
	
}

ll power(ll a,ll b)
{
	ll ans=1;
	while(b>0)
	{
		if(b%2==1)
		ans=(ans%mod*a%mod)%mod;
		a=(a*a)%mod;
		b=b/2;
	}
	return ans;
}

void solve()
{
	ll n;
	cin>>n;
	ll a[n],i,j;
	vector<ll> v;
	vector<ll> :: iterator it;
	map<ll,ll> m;
//	map<ll,ll> :: iterator it;
	f(i,n)
	cin>>a[i];
	
	ll val[n]; mem(val,0);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[i])
			val[0]=1;
			else
			val[0]=0;
		}
		else
		{
			if(a[i])
			val[i]=val[i-1]+1;
			else
			val[i]=val[i-1];
		}
	}
	
	
	ll final_ans=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			ll ans=0;
			for(ll k=i;k<=j;k++)
			ans+=abs(1-a[k]);
			
			if(i!=0)
			ans+=val[i-1];
			ans+=val[n-1]-val[j];
			
			final_ans=max(final_ans,ans);
			

		}
	}
	cout<<final_ans;
}

int main()
{
	speed()
	
//	seive();
//	for(int i=2;i<=10000;i++)
//	{
//		if(prime[i])
//		primes.pb(i);
//	}
	
	bool codechef=0;
	ll t=1;
	
	if(codechef)
	cin>>t;
	
	while(t--)
	{
		solve();
	}
	return 0;
}
