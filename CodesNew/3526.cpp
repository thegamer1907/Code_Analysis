#include <bits/stdc++.h>
#define ll long long
#define FAST  ios::sync_with_stdio(false); ios_base::sync_with_stdio(false);


using namespace std;

int main() 
{

    FAST;   
    
    ll n,m;
    cin>>n>>m;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    
    ll mx = *max_element(v.begin(),v.end());
    
    multiset<ll> pq;
    
    for(ll i=0;i<n;i++)
    {
        pq.insert(v[i]);
    }
    ll x = m;
    while(m--)
    {
        ll y = *pq.begin();
        //cout<<y<<" ";
        pq.erase(pq.begin());
        pq.insert(y+1);
    }
    
    cout<<(*max_element(pq.begin(),pq.end()))<<" "<<mx+x;
    
   return 0;
}
