#include<bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define W while
#define fn(i,x) for(i=0;i<x;i++)
#define fs(i,s,x) for(i=s;i<x;i++)
#define fr(i,x) for(i=x;i>=0;i--)
#define fit(it,s) for(it=s.begin();it!=s.end();it++)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define mod 1000000007
#define MAX 100005
using namespace std;
/*
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
*/
/*
ll modex(ll x,ll y)
{
    x=x%mod;
    ll r=1;
    while(y>0)
    {
        if(y%2==1)
            r=(r*x)%mod;
        y/=2;
        x=(x*x)%mod;
    }
    return r;
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    ll n,k1,k2=0,m,i,v,p,d;
    cin>>n>>m;
    p=m;
    multiset<ll> a;
    set<ll>::iterator it;
    fn(i,n)
    {
        cin>>v;
        a.insert(v);
        k2=max(k2,v);
    }
    fit(it,a)
    {
        d=k2-*it;
        if(m+*it>k2)
        {
            m-=d;
        }
        else
        {
        	m=0;
        	break;
        }
    }
    if(m>0)
    {
    	k1=m%n?m/n+1:m/n;
        cout<<k2+k1<<" ";
    }
    else
        cout<<k2<<" ";
    cout<<k2+p;
    return 0;
}




