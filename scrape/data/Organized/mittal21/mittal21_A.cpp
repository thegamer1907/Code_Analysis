/* ****mittal**** */
#include<bits/stdc++.h>
#define ll          long long int 
#define pb          push_back
#define endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define repr(i,a,b)   for(ll int i=a;i>=b;i--)
#define lbnd    lower_bound
#define ubnd        upper_bound
#define mp          make_pair
using namespace std;

#define N  100005
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll p[100005];
        for(int i=1;i<=m;i++)
        	cin>>p[i];
        ll page=1;
        ll last=k;
        ll ans=0;
        for(int i=1;i<=m;i++)
        {
        	ll c=0;
        	while(p[i+c]<=last)
        		c++;
        	if(c==0)
        	{
        		ll o=(p[i]-last);
        		if(o%k==0)
        			last=p[i];
        		else
        		{
        			ll u=o/k+1;
        			last=min(n,last+u*k);
        		}
        		i--;
        		continue;
        	}
        	ans++;
        	last=last+c;
        	i+=c-1;
        }
        cout<<ans;

    }
    return 0;
}