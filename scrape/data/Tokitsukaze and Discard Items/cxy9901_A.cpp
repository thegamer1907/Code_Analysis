#include <bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
typedef long long ll;
vector<ll>v;
ll n,m,k;

int main(){
    cin>>n>>m>>k;
    fore(i,1,m){ll x;scanf("%lld",&x);v.push_back(x);}
    reverse(v.begin(),v.end());
    ll now=0,ans=0;
    while(v.size()){
        ll str=(v[v.size()-1]-now-1)/k;
        int tmp=0;
        while(v.size() && (v[v.size()-1]-now-1)/k==str) tmp++,v.pop_back();
        ans++;
        now+=tmp;
    }
    cout<<ans;
    return 0;
}