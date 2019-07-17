#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=0, tosub=0;
    ll v[m];
    for(ll i=0; i<m; i++){
        cin>>v[i];
    }
    ll x=0;
    tosub = k;
    while(x<m){
        ll reduced=0;
        while(x<m && v[x] <= tosub){
            x++;
            reduced++;
        }
        if(reduced==0){
//             tosub += k;
            ll toadd = (v[x]-tosub)/k;
            tosub += (toadd*k);
            while(x<m && tosub < v[x]){
                tosub += k;
            }
        }else{
            ans++;
            tosub += reduced;
        }
    }
    cout<<ans;
    return 0;
}