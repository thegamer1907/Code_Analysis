#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
#define inf 0x3f3f3f3f
#define test cout<<"abcd\n";
#define pi pair<ll,ll>
#define pii pair<int,pi>
#define pb push_back
#define mxn 200005
#define MM 1000005
#define mp make_pair
ll c[26]={0};

/*ll seive[MM];
void creates()
{
    
    for(int i=MM-1;i>=2;--i)
    {
        for(int j=i;j<MM;j+=i)
            seive[j]=i;
    }
    seive[1] = 1;
    seive[0] = 0;
}

bool seive1[M];
void create1()
{
    
    for(ll i=2;i<M;++i)
    {
        if(!seive1[i])
        {
            for(ll j=i<<1;j<M;j+=i)
                seive1[j]=true;
        }
    }
}*/
/*ll modpow(ll x, unsigned ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = (modpow(x, y/2))%mod;
    if (y%2 == 0)
        return (temp%mod * temp%mod)%mod;
    else
        return ((x%mod * temp%mod)%mod * temp%mod)%mod;
}*/
ll bs(vector<ll>a,ll x)
{
    ll start=0,end=a.size(),mid;
    while(start<end)
    {
        mid=(start+end)/2;
        debug3(start,end,mid);
        debug1(a[mid]);
        if(a[mid]==x){return mid;}
        else if(a[mid]<x)
        {
            //cout<<"elseif\n";
            start=mid+1;
        }
        else
        {
            //cout<<"else\n";
            end=mid;
        }
    }
    return start+1;
}
int main()
{
    //fast;

    ll n,q;
    cin>>n>>q;

    ll i;
    vector<ll> a;
    //vector<ll> temp;
    vector<ll> c;

    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.pb(x);
        if(i==0)
            c.pb(a[i]);
        else
            c.pb(c[i-1] + a[i]);
        //temp.pb(a[i]);
    }

    ll total = 0;

    while(q--)
    {
        ll k;
        cin>>k;
        total += k;
        auto it = upper_bound(c.begin(),c.end(),total);

        if(it==c.end())
        {
            cout<<n<<endl;
            total = 0;
        }
        else
        {
            cout<<abs(distance(c.end(),it))<<endl;
        }
    }
    

    return 0;
}