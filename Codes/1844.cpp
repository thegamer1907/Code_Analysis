#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))

const int N=5e5+5;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=1,r=n*m,mid=(l+r)>>1;
    while(l<r){
        ll tot=0;
        for(int i=1;i<=n;i++){
            tot+=min(mid/i,m);
        }
        if(tot<k)l=mid+1;
        else r=mid;
        mid=(l+r)>>1;
        //cout<<l<<' '<<r<<endl;
    }
    cout<<mid<<endl;
    return 0;
}
