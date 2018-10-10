#include<bits/stdc++.h>
#include <string.h>
#define        lb                    lower_bound
#define        ll                    long long
#define        vi                    vector< ll >
#define        pb                    push_back
#define        all(c)                c.begin(),c.end()
#define        sz(a)                 int((a).size())
#define        tr(c,it)              for(it=c.begin();it!=c.end();it++)
#define        f(i,n)                for(ll i=0;i<n;i++)
#define        cut                   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;


int main()
{
    ll n,l,y;
    double m,x;
    vi v;
    cin>>n>>l;
    f(i,n)
    {
        cin>>y;
        v.pb(y);
    }
    sort(v.begin(),v.end());
  	 m=v[0];
    for(ll i=0;i<n-1;i++)
    {
        x=((double)(v[i+1]-v[i]))/2;
        if(x>m)
            m=x;
    }
    x=l-v[n-1];
    if(x>m)
        m=x;
        cout << std::setprecision(10);
    cout<<m;
}
