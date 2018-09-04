#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// ABS(R0-R1) <= SQRT((x0-x1)^2+(y0-y1)^2) <= (R0+R1);

int main(){
    ll n,d;
    scanf("%lld%lld",&n,&d);
    vector< pair < ll , ll > >v;
    for(int i=0;i<n;i++){
        ll cost,m;
        scanf("%lld%lld",&cost,&m);
        v.push_back(make_pair(cost,m));
    }
    ll freq[n+1]={};
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        freq[i+1]=freq[i]+v[i].second;
    }
    ll mx=0;
    for(int i=0;i<n;i++){
        ll l=i,h=n-1;
        while(l<h){
            ll mid=(l+h+1)/2;
            if(v[mid].first-v[i].first<d){
                l=mid;
            }
            else{
                h=mid-1;
            }
        }
        mx=max(mx,freq[l+1]-freq[i]);
    }
    cout<<mx;

}