#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
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

const ll N = 1000009,P = 29;
ll i,n,l,r,ha,hb,pa,pb,inv,ans,last;
string a;
vector<ll> v;
ll pw[N];
bool pos;
int main()
{
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>a;
    n = a.length();
    l = 0; r = n - 1;
    pa = pb = 1;
    while(l < n){
        pw[l] = pa;
        ha = (ha + ((a[l] - 'a' + 1) * pa) % mod) % mod;
        pa = (pa * P) % mod;
        
        
        hb = (hb * P) % mod;
        hb = (hb + (a[r] - 'a' + 1)) % mod;
        
        if(ha == hb)
            v.pb(l + 1);
        l += 1;
        r -= 1;
    }
    inv = modexp(P,mod - 2);
    last = n - 1;
    for(auto it = v.rbegin();it != v.rend();it++) if(*it < n - 1){
        revrep(i,last,*it)
            ha = (ha - ((a[i] - 'a' + 1) * pw[i]) % mod + mod) % mod;
        
        hb = 0; pb = 1;
        rep(i,1,*it + 1){
            hb = (hb + ((a[i] - 'a' + 1) * pb) % mod) % mod;
            pb = (pb * P) % mod;
        }
        if(ha == hb){
            ans = *it;
            pos = 1;
        }
        else{
            for(i = 1;i + *it < n - 1;i++){
                hb = (hb - (a[i] - 'a' + 1) + mod) % mod;
                hb = (hb * inv) % mod;
                hb = (hb + ((a[i + *it] - 'a' + 1) * modexp(P,*it - 1)) % mod) % mod;
                if(ha == hb){
                    ans = *it;
                    pos = 1;
                    break;
                }
            }
        }
        last = *it - 1;
        if(pos)
            break;
    }
    if(ans == 0) cout<<"Just a legend";
    else
        cout<<a.substr(0,ans);
    return 0;
}