#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld double
#define MOD 1000000007
ll n,m;
int main() {
    cin>>n>>m;
    map<string,ll> mp;
    ll cnt1=0,cn=0,cm=0;
    for(ll i=1;i<=n+m;i++){
        string s;
        cin>>s;
        if(i<=n){
        mp[s]=1;cn+=1;}
        else{
            if(mp.find(s)!=mp.end()){cn-=1;cnt1+=1;}
            else{cm+=1;}
        }
    }
    if(cnt1%2==0){
        if(cm>=cn){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    else{
        if(cn>=cm){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}