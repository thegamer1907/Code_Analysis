#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    ll b[n],a[n],q,i;
    for(i=0;i<n;i++)cin>>a[i];
    set<ll> s;
    for(i=n-1;i>=0;i--){
        s.insert(a[i]);
        b[i]=s.size();
    }
    
    for(i=0;i<m;i++){
        cin>>q;
        cout<<b[q-1]<<endl;
    }
    
    return 0;
}