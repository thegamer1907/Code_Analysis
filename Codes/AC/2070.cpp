#include <bits/stdc++.h>
#include <unordered_map>
#define F first
#define S second
using namespace std;
typedef long long ll;
ll cel(ll x,ll y){
    if(x%y==0)return x/y;
    return x/y+1;
}
ll POW(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    ll ans=POW(x,y/2);
    ans*=ans;
    if(y%2==0)return ans;
    return ans*x;
}
const int MX=1e6+9;
const ll mod=1e9+7;
const ll inf=1e18;
ll n,k,a[MX],ans;
map<ll,ll>m,m1;
int main(){
    scanf("%lld%lld",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        auto it=m.find(a[i]/k);
        auto it1=m1.find(a[i]/k);
        if(a[i]%k==0){
            if(it1!=m1.end())ans+=(it1->second);
            if(it!=m.end())m1[a[i]]+=m[a[i]/k];
        }
        m[a[i]]++;
    }
    cout<<ans<<endl;
}
