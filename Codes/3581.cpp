#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
const int N=5e5+5;
const int MOD=1e9+7;
//ll a[N],sum[N];
ll a[N],b[N],c[N],d[N];
map<pair<int,int>,vector<int> > mp1,mp2;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
//    cout << __gcd(0,-1)<<endl;

    ll n,m,k;
    cin >>n>>m>>k;
    ll x,s;
    cin >>x>>s;
    for(int i=1;i<=m;i++)   cin >> a[i];
    for(int i=1;i<=m;i++)   cin >> b[i];
    for(int i=1;i<=k;i++)   cin >> c[i];
    for(int i=1;i<=k;i++)   cin >> d[i];
    ll ans=(n-c[prev(upper_bound(d+1,d+k+1,s))-d] )*x;
    for(int i=1;i<=m;++i){
        if(s>=b[i]) ans = min(ans,(n-c[prev(upper_bound(d+1,d+k+1,s-b[i]))-d])*a[i]);
    }

    cout << ans << endl;
    return 0;
}
