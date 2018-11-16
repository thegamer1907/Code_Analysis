#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin>>n>>k;

    map<ll,ll> m;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]=i;
    }

    if(a[k-1]>0)
        cout<<m[a[k-1]]+1<<endl;
    else{
        bool flag=false;
        for(auto p:m){
            if(p.first>0){
                flag=true;
                cout<<p.second+1<<endl;
                break;
            }
        }
        if(!flag)
            cout<<"0\n";
    }
    
}
