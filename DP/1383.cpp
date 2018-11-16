#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define fd(i,a,b) for(int i=(a);i>=(b);--i)
#define fo1(i,a,b) for(int i=(a);i<(b);++i)
#define LL long long
#define TASK "A"
using namespace std;
///---------------------------------------------------
int n, a[1005], f[1005], g[1005], res = INT_MIN;
///---------------------------------------------------
void nhap(){
    cin>>n;
    fo(i,1,n)   cin>>a[i];
}
///---------------------------------------------------
void solve(){
    fo(i,1,n){
        f[i] = (a[i]==0)? f[i-1]+1: f[i-1];
        g[i] = (a[i]==1)? g[i-1]+1: g[i-1];
    }
    fo(i,1,n)
        fo(j,1,i)
            res = max(res, f[i]-f[j-1]+g[j-1]+g[n]-g[i]);
    cout<<res;
}
///---------------------------------------------------
int main(){
    #ifndef ONLINE_JUDGE
        freopen(TASK".inp","r",stdin);
        freopen(TASK".out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    nhap();
    solve();
}

