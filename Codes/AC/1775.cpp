#include<bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define dec(i, l, r) for (int i = l; i>=r;i--)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define ii pair<int,int>
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define pie 3.141592653589793238,t
#define inf ((ll)1e18)
#define eps 1e-7
#define mod ((int)1e9+7)
#define maxlg 18
const int maxn = ((int) 1e6) + 5;
#define left(i) ((i)<<1)
#define right(i) (((i)<<1)+1)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    //freopen("/home/arasmus/output", "w", stdout);
#endif
    ll n,m,k;
    cin>>n>>m>>k;
    //k = n*m -k ;
    ll l = 1,r = n*m;
    ll ans;

    while (l<=r) {
        ll mid = (l+r)/2;
        ll sum=0;
        rep (i,1,n+1) {
            sum += min(mid/i,m);
        }
        if (sum<k) {
            l = mid + 1;
        }
        else {
            ans = mid;
            r = mid - 1;

        }
    }

    cout<<ans;
    return 0;
}