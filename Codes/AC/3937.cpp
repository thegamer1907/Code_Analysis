#include <bits/stdc++.h>

using namespace std;
#define INF 1000000000000000
typedef long long ll;
ll nb,ns,nc,pb,ps,pc,r,B,S,C,capb=INF,modb,caps=INF,mods,capc=INF,modc,ans;
string s;
bool check(ll num){
    ll reqb=0,reqs=0,reqc=0;
    if(B)reqb=max(num-capb,0ll)*B-modb;
    if(S)reqs=max(num-caps,0ll)*S-mods;
    if(C)reqc=max(num-capc,0ll)*C-modc;
    if(r >= reqb*pb+reqs*ps+reqc*pc) return true;
    return false;
}
ll bs(ll l, ll r){
    if(l>=r) return ans;
    ll mid=(l+r)/2;
    if(check(mid)){
        ans=mid;
        bs(mid+1,r);
    }
    else {
        bs(l,mid);
    }
}
int main()
{
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') B++;
        if(s[i]=='C') C++;
        if(s[i]=='S') S++;
    }
    if(B){capb=nb/B;modb=nb%B;}
    if(S){caps=ns/S;mods=ns%S;}
    if(C){capc=nc/C;modc=nc%C;}
    ll res=bs(0,200000000000007);
    cout<<res<<"\n";
    return 0;
}
