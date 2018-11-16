#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    set<ll> a,b;
    ll i,n=s.size();
    for(i=0;i<n-1;i++){
        if(s[i]=='A'&&s[i+1]=='B')a.insert(i);
        if(s[i]=='B'&&s[i+1]=='A')b.insert(i);
    }
    string ans="NO";
    for(auto x:a){
        ll f=0;
        for(auto y:b){
            if(x-1==y)continue;
            if(x+1==y)continue;
            f=1;
            break;
        }
        if(f==1){
            ans="YES";
            break;
        }
    }
    cout<<ans;
    
    return 0;
}