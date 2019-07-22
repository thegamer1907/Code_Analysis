#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int i,total;
    ll n,k;
    vector<ll> v;
    cin>>n>>total>>k;

    for(i=0;i<total;i++){
        ll val;
        cin>>val;
        v.push_back(val);
    }



    ll lim=k;
    ll _count=0,st=0;
    while(total>0){
        if(lim<v[st]){
                double dif = v[st]-lim;
                ll kk = floor(dif/k);
                ll x = kk*k;
                lim+=x;
        }
        int c = upper_bound(v.begin()+st,v.end(),lim)-v.begin();
        c-=st;
        if(c) _count++;
        if(!c) lim+=k;
        lim+=c;
        total-=c;
        st+=c;
    }

    cout<<_count<<"\n";
    return 0;
}