#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n,m,k;
cin>>n>>m>>k;
vector<ll> v;
ll temp;
for(ll i=0;i<m;i++){
    cin>>temp;
    v.push_back(temp);
}
ll cnt=0;
ll lst=k;
ll steps=0;
sort(v.begin(),v.end());
ll nxt=k;

for(ll i=0;i<m;i++){
        int flg=0;
        ll cnt=0;
       // cout<<nxt<<" b "<<endl;
    while(i<m && v[i]<=nxt){
            cnt++;
        i++;
flg=1;
    }

    nxt+=cnt;
    if(flg==1){
        steps++;
        i--;
    }
    if(flg==0){
        ll x=(v[i]-1)/k;
        x*=k;
        x+=(nxt%k);
        while(x<v[i]){
            x+=k;
        }
        nxt=x;
        i--;
    }

}
cout<<steps<<endl;
}