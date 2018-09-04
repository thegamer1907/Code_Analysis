#include <bits/stdc++.h>

#define fr first
#define sc second
typedef long long ll;
using namespace std;
ll pne1,ne1b,ne1s,ne1c,nb,ns,nc,pb,ps,pc,r;
string s;
ll neb,nes,nec,pne;
bool valid(ll num){
    neb=max(0ll,num*ne1b-nb);
    nes=max(0ll,num*ne1s-ns);
    nec=max(0ll,num*ne1c-nc);
    return r>=neb*pb+nes*ps+nec*pc;
}
int main()
{
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B')ne1b++;
        else if(s[i]=='S')ne1s++;
        else ne1c++;
    }
    pne1=ne1b*pb+ne1s*ps+ne1c*pc;
    ll s=0,e=1e15,mid=0,ans=0;
    while(s<e){
        mid=(s+e)/2;
        if(valid(mid))s=mid+1,ans=mid;
        else e=mid;
    }
    cout<<ans;
}
