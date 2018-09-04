#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll > pp;
 
int const N=4e5+10,oo=1e9;
int mod=oo+7;
ll const OO=1e18;

ll n,m,k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    ll l=1,r=n*m,mid,res=0;
    while(l<=r){
        mid=(l+r)>>1;
        ll cnt=0;
        for(int i=1;i<=n;i++){
            cnt+=min(mid/i-(mid%i==0),m);
        }
        if(cnt>=k)r=mid-1;
        else l=mid+1,res=mid;
    }
    cout<<res<<endl;
    return 0;
}