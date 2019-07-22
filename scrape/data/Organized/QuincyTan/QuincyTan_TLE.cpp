#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

ll a[maxn];
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    int ans=0,cnt=0;
    int i=1;
    while(cnt!=m){
        ll r = ((a[i]-cnt)/(k+1)+1)*k+cnt;
        while(i<=m&&a[i]<=r){
            cnt++;
            i++;
        }
        ans++;
    }
    cout<<ans<<'\n';
}