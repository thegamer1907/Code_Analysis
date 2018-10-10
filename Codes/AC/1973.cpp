#include <bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define ii pair<int,int>
#define max(a, b) (((a)<(b))?b:a)
#define min(a, b) ((a>b)?b:a)
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define pi 3.141592653589793238
#define mod ((int)1e9 + 7)
#define inf ((ll)1e18)
#define eps 1e-14
#define maxlg 18
#define left(i) ((i)<<1)
#define right(i) (((i)<<1)+1)
#define maxn 1000004


ll arr[maxn];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
#endif
    map<pair<ll,ll>,ll> m;
    int n;ll k;cin>>n>>k;
    rep (i,0,n)cin>>arr[i];
    ll ans=0;


    if (k!=1) {
        ll zz= 0;
        for (int i=n-1;i>=0;i--) {
            if (arr[i]==0) {
                zz++;
                continue;
            }
            m[mp(arr[i],1)]++;
            m[mp(arr[i],2)] += m[mp(arr[i]*k,1)];
            m[mp(arr[i],3)] += m[mp(arr[i]*k,2)] ;
            ans += m[mp(arr[i]*k,2)] ;
        }
        if (zz>=3)
        ans+= (((zz)*(zz-1)*(zz-2))/6);
    } else {
        sort(arr,arr+n);
        ll c= -inf;
        ll f = 0;
        rep (i,0,n) {
            if (c!=arr[i]) {
                if (f>=3)
                    ans += max(0,((f)*(f-1)*(f-2))/6);
                c = arr[i];
                f=1;
            } else {
                f++;
            }
        }
        if (f>=3)
            ans += max(0,((f)*(f-1)*(f-2))/6);

    }
    cout<<ans;
    return 0;
}