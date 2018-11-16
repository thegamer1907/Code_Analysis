#pragma optimization_level 3
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define F first
#define S second
#define sh cin.tie(0); cin.sync_with_stdio(0);
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define vprint(v) for(int ii = 0; ii<v.size(); ii++){cout<<v[ii]<<" ";}
#define initialize_matrix(n,m,v) for(int i = 0; i<n; i++)  {for(int j = 0; j<m; j++){ int aa = 1;aa = rand() % 10 + 1;v[i].pb(aa);cout<<aa<<" ";}cout<<endl;}
using namespace std;
ll get(ll l, ll r, ll p, ll a, ll b)
{
    if(a<l||b>r)
    {
        cout<<l<<" "<<r<<endl;
         return p;

    }

    ll mid = (l+r)/2;
    ll k = 0;
    if(a<=mid&&b>mid)
        return p;
    if(b<=mid)
    k = get(l, mid, p+1, a,b);
    else
    k = get(mid+1,r,p+1,a,b);
    return k;
}
int main()
{
    ll n,aa,b;
    cin>>n>>aa>>b;
    ll a = min(aa,b);
    b = max(aa,b);
    ll k = 1;
    ll nn = n;
    while(n!=1)
    {
        n/=2;
        k++;
    }
    n = nn;
    ll ans = k-get( 1, n, 1, a, b);
    if(ans == k-1)
    {
        cout<<"Final!";
    }
    else
    cout<<ans ;

    return 0;
}

