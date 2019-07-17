// ░░░░░░░░( •̪●)░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░███████ ]▄▄▄▄▄▄▄▄▃░░░▃░░░░ ▃░
// ▂▄▅█████████▅▄▃▂░░░░░░░░░░░░░░░░░
// [███████████████████].░░░░░░░░░░░░░░
// ◥⊙▲⊙▲⊙▲⊙▲⊙▲⊙▲⊙◤...░░░░░░░░░░░░

//PointBlank's code (⌐■_■)

#include <bits/stdc++.h>
using  namespace std;

#define repp(i, a, b) for(ll i = a; i <= b; i++)
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rrep(i, b, a) for(ll i = b; i >= a; i--)
#define pb(a) push_back(a)
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define lb(v, x) lower_bound(all(v), x)
#define lbc(v, x, fun) lower_bound(rall(v), x, fun)
#define ub(v, x) upper_bound(all(v), x)
#define ubc(v, x, fun) upper_bound(rall(v), x, fun)
#define mp(a, b) make_pair(a, b)
#define MOD 1000000007
#define quickio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll kl = k;
    ll arr[m];
    rep(i, 0, m)cin >> arr[i];
    sort(arr, arr+m);
    ll c = 0, d = 0;
    ll i = 0;
    ll lb = 0;
    while(i < m) {
        ll b = 0;
        while(arr[i]-d <= k) {
            i++;
            b++;
        }
        d += b;
        if( b > 0)c++;
        else k = arr[i]/kl * kl;
    }
   cout << c << endl;
}