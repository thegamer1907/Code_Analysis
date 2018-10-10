#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp,mp1;
vector<ll>v;
int main(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll z1=1,z2=k,z3=k*k;
    ll cnt=0;
    ll sum=0;
    for(ll i=1;i<=n;i++){
        ll x;
        scanf("%lld",&x);
        if(k==1){
            if(!mp[x])v.push_back(x);
            mp[x]++;
        }
        else{
            if(x%z3==0){
                sum+=mp1[x/k];
            }
            if(x%k==0){
                mp1[x]+=mp[x/k];
            }
            mp[x]++;
        }//cout<<x<<' '<<mp1[x]<<' '<<mp[x]<<endl;
    }
    if(k==1){
        ll ans=0;
        for(int i=0;i<v.size();i++){
            if(mp[v[i]]>2){
                ll s=mp[v[i]];
                ans+=(s*(s-1LL)*(s-2LL))/6LL;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    cout<<sum<<endl;
}
