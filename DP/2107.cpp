#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    set<ll>s;
    ll n,m,ans[100005],a[100005];
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>0;i--){
        s.insert(a[i]);
        ans[i]=s.size();
    }
    for(int i=1;i<=m;i++){
        ll l;
        cin>>l;
        cout<<ans[l]<<"\n";
    }
}