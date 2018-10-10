#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxS=1e9+1;
ll imple(vector<ll> a,ll n,ll k)
{
    vector<ll> val(a.begin(),a.end());
    for(ll i=0;i<n;i++) val[i]+=(i+1)*(ll)k;
    sort(val.begin(),val.end());
    //ll cnt=-1,i=1;
    ll cost=0;
    for(ll i=0;i<k;i++)
    cost+=val[i];
    return cost;
}
int main()
{
    ll n;ll s;
    cin>>n;cin>>s;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll mins=0,maxs=n+1;
    //ll cost=LONG_MAX;
    while(mins<maxs-1)
    {
        ll mid=(mins+maxs)/2;
        if(imple(a,n,mid)<=s)
        {
            //cost=min(temp,cost);
            mins=mid;
        }
        else maxs=mid;
    }
    cout<<mins<<" "<<imple(a,n,mins)<<endl;

}

