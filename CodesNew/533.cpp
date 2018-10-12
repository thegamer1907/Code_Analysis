#include <sstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<ctime>
#include<cmath>
#include<map>
#include<stack>
#include<random>
#include<queue>
#include<list>
using namespace std;
const long long int INF=2000000000000000000;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MAX=20000001;
ll MOD(ll a, ll b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}
ll max3(ll a,ll b, ll c)
{
    return max(c,max(a,b));
}
ll min3(ll a,ll b,ll c)
{
    return min(a,min(b,c));
}
ll power(ll x,ll y )
{
    ll res = 1;
    x = x%mod ;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%mod;
        y = y>>1;
        x = (x*x)*mod;
    }
    return res;
}
ll modpow(ll a,ll b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        if(b%2==0)
        {
            ll d=modpow(a,b/2);
            return (d*d)%mod;
        }
        else
        {
            ll d=modpow(a,b/2);
            return (((d*d)%mod)*(a%mod))%mod;
        }
    }
}
ll logg(ll a)
{
    ll x=0;
    while(a>1)
    {
        x++;
        a/=2;
    }
    return x;
}
ll gcd(ll a,ll  b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> primes;primes.resize(MAX,0);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=2;i*i<=MAX;i++)
    {
        if(primes[i]==0)
        {
            for(int j=i*2;j<MAX;j=j+i)
            {
                primes[j]=i;
            }
        }
    }
    for(int i=2;i<MAX;i++)
    {
        if(primes[i]==0)
        {
            primes[i]=i;
        }
    }
    vector<int> divs;
    for(int i=2;i<MAX;i++)
    {
        if(primes[i]==i)
        {
            divs.pb(i);
        }
    }
    vector<int> ans;ans.resize(divs.size(),0);
    for(int i=0;i<n;i++)
    {
        int temp1=-1;
        while(x[i]>1)
        {
            int temp=primes[x[i]];
            int ind=lower_bound(all(divs),temp)-divs.begin();
            x[i]=x[i]/temp;
            if(temp1!=temp)
            {
                ans[ind]++;
            }
            temp1=temp;
        }
    }
    vector<ll> csum(divs.size());
    csum[0]=ans[0];
    for(int i=1;i<csum.size();i++)
    {
        csum[i]=ans[i]+csum[i-1];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        int l1=lower_bound(all(divs),l)-divs.begin();
        int l2=upper_bound(all(divs),r)-divs.begin();
        l1--;
        l2--;
        if(l1==-1)
        {
            if(l2==-1)
            {
                cout<<0;
            }
            else
            {
                cout<<csum[l2];
            }
        }
        else
        {
            cout<<csum[l2]-csum[l1];
        }
        cout<<endl;
    }
    
}
