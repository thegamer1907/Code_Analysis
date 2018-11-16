#include<bits/stdc++.h>
using namespace std;
#define ll  long long



int main(){

    ll n,m,res = 0,k;cin>>n;
    vector<ll> b,g;
    for(ll i=0;i<n;++i)
        {cin>>k;b.push_back(k);}
    cin>>m;
    for(ll i=0;i<m;++i)
        {cin>>k;g.push_back(k);}

    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    for(ll i =0;i<n;++i){
        for(ll j=0;j<m;++j){
            if(abs(b[i] - g[j]) <= 1)
            {++res;g[j] = INT_MAX;break;}
        }
    }
    cout<<res;


}
