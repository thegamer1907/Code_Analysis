#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define fd(i,a,b) for(int i=(a);i>=(b);--i)
#define fo1(i,a,b) for(int i=(a);i<(b);++i)
#define LL long long
#define TASK "A"
using namespace std;
///---------------------------------------------------
int n, t, a[30005], tmp = 1;
///---------------------------------------------------
void nhap(){
    cin>>n>>t;
    fo(i,1,n) cin>>a[i];
}
///---------------------------------------------------
void solve(){
    while (tmp<t) tmp +=a[tmp];
    if (tmp == t) cout<<"YES"; else cout<<"NO";
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
