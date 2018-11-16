#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
ll N =1e9+7;
using namespace std;
ll steps(ll i,vector <ll> v[], ll c[], ll color, ll p)
{
    ll ans=0;
    if(c[i]!=color)
    {
        ans++;
        color=c[i];
    }
    ll j;
    for(j=0;j<v[i].size();j++)
    {
        if(v[i][j]!=p)
            ans+=steps(v[i][j],v,c,color,i);
    }
    return ans;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,i,p;
    cin>>n;
    vector <ll> v[n+1];
    for(i=2;i<=n;i++)
    {
        cin>>p;
        v[i].push_back(p);
        v[p].push_back(i);
    }
    
    ll c[n+1];
    for(i=1;i<=n;i++)
        cin>>c[i];
    
    cout<<steps(1,v,c,0,-1);
    return 0;
}
