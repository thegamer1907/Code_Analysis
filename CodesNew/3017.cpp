#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    string s;
    cin>>n>>s;
    vector<ll>v;
    for(ll i = 0;i<s.size();i++){
        if(s[i]=='1')
            v.push_back(i);
    }
    if(v.size() < n){
        return puts("0");
    }
    ll r= 0;
    if(n == 0){
        for(ll i = 0;i<v.size();i++){
            if(i == 0)
                r+=v[i]*(v[i]+1)/2;
            else
                r+=(v[i]-v[i-1]-1)*(v[i]-v[i-1])/2;
        }
        if(v.empty())
            v.push_back(-1);
        r+=(s.size()-v.back() -1)*(s.size()-v.back())/2;
    }else{
        for(ll i = 0;i<v.size();i++){
            ll p1,p2;
            if(i+n-1 >= v.size())
                break;
            if(i == 0){
                p1 =v[i]+1;
            }else{
                p1=v[i]-v[i-1];
            }
            if(i+n-1 == v.size()-1){
                p2 = s.size()-v[i+n-1];
            }else{
                p2 = v[i+n]-v[i+n-1];
            }
            r+=p1*p2;
        }
    }
    cout<<r;
    return 0;
}
/*
12345
10010
*/
