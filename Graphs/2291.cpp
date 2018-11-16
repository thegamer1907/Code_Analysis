#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    set<ll> s;
    ll i,a[n];
    queue<ll> q;
    ll lev[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==-1){lev[i]=1;q.push(i);}
        //s.insert(a);
    }
    ll ans=1;
    while(!q.empty()){
        ll d=q.front();
        q.pop();
        for(i=0;i<n;i++){
        
        if(a[i]==-1)continue;
        if(a[i]-1==d){
        lev[i]=lev[a[i]-1]+1;
        if(lev[i]>ans)ans=lev[i];
            q.push(i);
        }
    }}
    cout<<ans;
//    cout<<s.size();
    return 0;
}