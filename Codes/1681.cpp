#include<bits/stdc++.h>
using namespace std;
#define rt return
#define ll long long int
const int N = 1e6+6;
ll f(ll x, int n, int m){
    ll res = 0;
    --x;
    for(int i=1;i<=n;++i) res+=min((ll)m, x/i);
    return res;
}

int main(){
    int n, m;
    cin>>n>>m;
    ll k;
    cin>>k;
    ll l = 1, r = 1LL*n*m+1;
    while(l<r){
        ll x = (l+r)>>1;
        if(f(x,n,m)<k) l = x+1; else r = x;
    }
    cout<<l-1;
    cout<<'\n';
    rt 0;
}