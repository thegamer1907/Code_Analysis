#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

ll a[maxn];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    int ans=0,cnt=0;
    int i=1;
    while(i<=m){
        ll r = ((a[i]-cnt-1)/k+1)*k+cnt; //计算第一个特殊数所在页上限
        while(i<=m&&a[i]<=r){
            cnt++;
            i++;
        }
        ans++;
    }
    cout<<ans<<'\n';
}