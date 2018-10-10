#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define mod 1000000007
#define MAX 1000000000000000
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(ll)a;i<(ll)b;i++)
#define revrep(i,a,b) for(i=(ll)a;i>=(ll)b;i--)
#define ii pair<ll,ll>
#define MP make_pair
#define pb push_back
#define f first
#define se second
#define ll long long int
#define vi vector<ll>
ll modexp(ll a,ll b){ ll res = 1; while(b > 0){  if(b & 1) res = (res * a)%mod;  a = (a * a)%mod;  b/=2;  }  return res; }
#define rs resize
typedef tree< ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > OST;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
 
const ll N = 1000009,M = 29;
ll i,n,last,lo,hg,mid,ans = -1;
string a;
vector<ii> v;
ll pre[N],pw[N];
bool can(ll p)
{
    for(ll i = 1;i + v[p].f - 1 < n - 1;i++)
    {
        ll c = (pre[i + v[p].f - 1] - pre[i - 1] + mod)%mod;
        c = (c * modexp(pw[i],mod - 2))%mod;
        if(c == v[p].se){
            return 1;
        }
    }
    return 0;
}
int main()
{
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    pw[0] = 1;
    rep(i,1,N) pw[i] = (pw[i - 1] * M)%mod;
    cin>>a;
    n = a.length();
    rep(i,0,n){
        pre[i] = ((a[i] - 'a' + 1) * pw[i])%mod;
        pre[i] = (pre[i] + last)%mod;
        last = pre[i];
    }
    for(i = 1;i <= n;i++){
        ll s = pre[i - 1];
        ll r = (pre[n - 1] - pre[n - i - 1] + mod)%mod;
        r = (r * modexp(pw[n - i],mod - 2))%mod;
        if(s == r)
           v.pb(MP(i,s));
    }
    lo = 0; hg = v.size() - 1;
    while(lo <= hg)
    {
        mid = (lo + hg)/2;
        if(can(mid)) ans = mid,lo = mid + 1;
        else
            hg = mid - 1;
    }
    cout<<(ans == -1 ? "Just a legend" : a.substr(0,v[ans].f));
    return 0;
}