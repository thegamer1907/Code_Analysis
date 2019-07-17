#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+7;
int n,a[N],m,k;
signed main() {
    cin>>n>>m>>k;
    for(int i=1;i<=m;++i) cin>>a[i];
    sort(a+1,a+1+m);
    int ans=0,l=1;
    while(l<=m) {
        int j=(a[l]-l+1)%k;
        if(!j) j=k;
        while(j+(a[l+1]-a[l])<=k&&l<=m) l++,j+=a[l]-a[l-1];
        l++,ans++;
    }
    cout<<ans;
    return 0;
}