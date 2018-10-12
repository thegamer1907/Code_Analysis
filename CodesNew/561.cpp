#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define mod 1000000007
#define oo 1000000000000000
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(ll)a;i<(ll)b;i++)
#define revrep(i,a,b) for(i=(ll)a;i>=(ll)b;i--)
#define ii pair<string,string>
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

const ll N = 10000009;
ll i,j,g,a,q,n,l,r,ans;
ll bg[N];
map<ll,ll> mp;
int main()
{
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(i = 2;i < N;i += 1) if(bg[i] == 0){
        for(j = i;j < N;j += i) bg[j] = i;
    }
    cin>>n;
    rep(i,0,n){
        cin>>a;
        while(a > 1){
            g = bg[a];
            mp[g] += 1;
            while(a % g == 0) a /= g;
        }
    }
    i = 0;
    for(auto &u: mp){
        u.se += i;
        i = u.se;
    }
    cin>>q;
    while(q--){
        cin>>l>>r;
        ans = 0;
        auto u = mp.lower_bound(l);
        auto v = mp.upper_bound(r);
        if(u != mp.end()){
            v--;
            if(u == mp.begin()) g = 0;
            else{
                u--;
                g = u->se;
            }
            ans = v->se - g;
        }
        cout<<ans<<endl;
    }
    return 0;
}