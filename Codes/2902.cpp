#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
vector <ll> v;
ll h[1111111], ppow[1111111];
ll p=31;
bool findSuf(ll l, ll len){
    ll k=1, n=s.size()-len;
    if (ppow[n-l]*h[l+len-1]==h[n+len-1]-h[n-1]){
        return 1;
    }
    return 0;
}

bool findMid(ll x){
    for (ll i=1;i<s.size()-v[x];++i){
        if (ppow[i]*h[v[x]-1]==h[i+v[x]-1]-h[i-1]){
            return 1;
        }
    }
    return 0;
}

int main (){
    cin >> s;
    ppow[0]=1;
    for (ll i=1; i<s.size();++i){
        ppow[i]=ppow[i-1]*p;
    }
    for (ll i=0; i<s.size(); ++i){
        h[i]=(s[i] - 'a' + 1) * ppow[i];
        if(i)h[i]+=h[i-1];
    }

    for (ll i=0; i<s.size()-1; ++i){
        if (findSuf(0,i+1)){
            v.push_back(i+1);
        }
    }
    if (v.empty()){
        cout << "Just a legend";
        return 0;
    }
    ll l=0, r=v.size()-1, m;
    while(l+1<r){
        m=(l+r)/2;
        if(findMid(m)){
            l=m;
        }else{
            r=m-1;
        }
    }
    if (!findMid(l)){
        cout << "Just a legend";
        return 0;
    }
    if(findMid(r)) l=r;
    cout << s.substr(0, v[l]);
}
