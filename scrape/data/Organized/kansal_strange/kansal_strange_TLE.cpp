#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=0, tosub=0, newadd;
    vector<ll>v;
    ll x;
    for(ll i=0; i<m; i++){
        cin>>x;
        v.push_back(x);
    }
    x=0;
    tosub = k;
    while(x<m){
        ll reduced=0;
        while(x<m && v[x]<=tosub){
            x++;
            reduced++;
        }
        if(reduced==0){
            tosub +=k;
        }else{
            ans++;
            tosub += reduced;
        }
    }
    cout<<ans<<endl;
    return 0;
}