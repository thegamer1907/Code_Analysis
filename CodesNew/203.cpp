#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define fd(i,a,b) for(int i=(a);i>=(b);--i)
#define fo1(i,a,b) for(int i=(a);i<(b);++i)
#define LL long long
#define TASK "B"
using namespace std;
///---------------------------------------------------
int n, t, a[100005], res, S[100005];
///---------------------------------------------------
void nhap(){
    cin>>n>>t;
    fo(i,1,n) cin>>a[i], S[i] = S[i-1] + a[i];
}
///---------------------------------------------------
bool check(int x){
    fo(i,1,n-x+1) if (S[i+x-1] - S[i-1]<=t) return true;
    return false;
}
///---------------------------------------------------
void solve(){
    int l = 0, r = n;
    while (l<=r){
        int mid = (l+r)/2;
        if (check(mid)) res = mid, l = mid+1;
        else r = mid - 1;
    }
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

