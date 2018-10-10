#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define abs 1e-10

typedef long long ll;
typedef vector <int> vi;

ll absv(ll n)
{
    if(n<0)n*=-1;
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);

    ll n,k;cin>>n>>k;

    map<ll,ll> a,b,c;

    for(int i=0;i<n;i++)
    {
        ll num;
        cin>>num;

        if(num% (k*k) == 0)
        {
            c[num]+= b[num/k];
        }

        if( num%k ==0)
        {
            b[num]+= a[num/k];
        }

        a[num]++;




    }
    ll ans=0;
    for(map< ll,ll> :: iterator it = c.begin();it!=c.end();it++)
    {
        ans+= it->S;
    }
    cout<<ans<<endl;
}
