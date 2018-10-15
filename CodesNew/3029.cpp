#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    ll k; cin>>k;
    string s; cin>>s;
    ll prev=0,cur=0,ans=0,calc=0;
    if(!k){
        prev=-1;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1') prev=i;
            ans+=i-prev;
        }
    }else{
        for(ll i=0;i<s.size();i++){
            cur+=(s[i]-'0');
            if(s[i] == '1') calc=0;
            while(s[prev]=='0' && cur==k)++prev,++calc;
            if(cur == k){
                ans+=calc+1;
            }else if(cur == k+1){
                prev++; --cur;
                while(s[prev]=='0' && cur==k)++prev,++calc;
                if(cur == k) ans+=calc+1;
            }
        }
    }
    cout<<ans<<'\n';
}