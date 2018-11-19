/* winners never quit and quitters never win.
      #swap                                 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mod 1000000007
#define rk 256
#define pb push_back
#define mp make_pair
#define vc vector
#define fs first
#define sec second
#define pq priority_queue
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll,ll> 
#define all(v) v.begin(),v.end()
#define T ll t=0;cin>>t;for(ll test=0;test<t;test++)
/*ll ncr[5001][5001];
void coeff()
{
    for(ll a=0;a<5001;a++)
    {
        for(ll b=0;b<5001;b++)
        {
            ncr[a][b]=0;
        }
        ncr[a][0]=1;
    }
    for(ll a=1;a<5001;a++)
    {
        for(ll b=1;b<=a;b++)
        {
            ncr[a][b]=(ncr[a-1][b]+ncr[a-1][b-1])%mod;
        }
    }
}*/
ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp&1) res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
} 
ll pr[1000001]={0};
void isprime()
{
    pr[0]=1;
    pr[1]=1;
    for(ll a=2;a<1000001;a++)
    {
        if(!pr[a])
        {
            for(ll b=a*2;b<1000001;b+=a)
            {
                pr[b]=1;
            }
        }
    }
}
ll comp=1,tim=0;
struct vertex
{
    vc<ll> adj;
    ll vis=0;
    ll parent=-1;
    ll dist=0;
    ll component=0;
    ll in=0;
    ll out=0;
    ll low=0;
    ll child=0;
    bool AP=false;
};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	//isprime();
	//coeff();
	string pass;
	cin>>pass;
	ll n;
	set<char> first,last;
	cin>>n;
	set<string> s1;
	while(n--)
	{
	    string s;
	    cin>>s;
	    s1.insert(s);
	    first.insert(s[0]);
	    last.insert(s[1]);
	}
	if(last.count(pass[0]) && first.count(pass[1]) || s1.count(pass))
	{
	    cout<<"YES\n";
	}
	else
	{
	    cout<<"NO\n";
	}
	return 0;
}