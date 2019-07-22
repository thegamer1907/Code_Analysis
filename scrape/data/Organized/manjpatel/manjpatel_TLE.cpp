#include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ld double
    #define vv vector<ll>
    #define pp pair<ll,ll>
    #define ff first
    #define ss second
    #define vp vector<pp>
    #define pb push_back
    #define mp make_pair
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
    #define maxn 105
    const ll mod=1e9+7;
    #define N 1000001
    ll p[N];
    ll n,m;
    void isprime()
    {
        memset(p,-1,sizeof(p));
        for(ll i=2;i<N;i++)
        {
            if(p[i]==-1)
            {
            	p[i]=i;
                for(ll j=i*i;j<N;j+=i)
                {
                    if(p[j]==-1)
                    {
                    	p[j]=i;
					}
                }
            }
        }
    }
    ll power(ll a,ll n)
    {
        ll ans=1;
        a=a%mod;
        while(n>0)
        {
            if(n&1)
            {
                ans=(ans*a)%mod;
            }
            n=n>>1;
            a=(a*a)%mod;
        }
        return ans;
    }
    ll gcd(ll a,ll b)
    {
        if(b==0)
        return a;
        
        return gcd(b,a%b);
    }
    

    int main()
    {
    	fast;
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> v;
        for(ll i=0;i<m;i++)
        {
        	ll x;
        	cin>>x;
        	v.pb(x);
		}
		sort(v.begin(),v.end());
		ll z=k;
		ll ans=0;
		ll sum=0;
		while(1)
		{
			//cout<<z<<endl;
			ll d=lower_bound(v.begin(),v.end(),z)-v.begin();
			//cout<<d<<endl;
			//d=d-sum;
			//sum=sum+d;
			if(d==m)
			{
	        	break;
			}
			if(d==0)
			{
				if(z+k <= n)
				{
					z=z+k;
				}
				else
				{
					z=n-z;
				}
			}
			else
			{
				ans++;
				z=z+d;
			}
		}
		cout<<ans;
        return 0;
	}