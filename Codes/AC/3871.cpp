#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    cin>>s;
    ll nb,ns,nc,pb,ps,pc,r;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ll cntb=0,cnts=0,cntc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B')cntb++;
        if(s[i]=='S')cnts++;
        if(s[i]=='C')cntc++;
    }
    ll ans=0;
    ll low=0;
    ll high=1e13;
    while(high-low>1){
        ll mid=(high+low)>>1;
        ll needb=max(1LL*0,(mid*cntb-nb)*pb);
        ll needs=max(1LL*0,(mid*cnts-ns)*ps);
        ll needc=max(1LL*0,(mid*cntc-nc)*pc);
        if(needb+needs+needc>r){
            high=mid;
        }
        else{
            low=mid;
            ans=mid;
        }

    }
    cout<<ans;
    return 0;
}
