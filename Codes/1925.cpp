// start of CP 2.0
#include <bits/stdc++.h>

//____By:sirjan13____

#define int long long
#define ld long double
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
//#define fi first
//#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<ll>
#define pb push_back
#define pi pair<int,int>
#define si set<int>
#define sll set<ll>
#define pll pair<ll, ll>
#define sci(x) scanf("%d",&x)
#define scs(x)  scanf("%s", x)
#define scll(x) scanf("%I64d",&x)
#define all(v) v.begin(),v.end()
#define sot(v) sort(v.begin(), v.end())
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define PI 3.1415926535
#define long_zero 0ll
#define long_one 1ll

inline int sbt(int x){return __builtin_popcount(x);}

using namespace std;

#define TRACE
#ifdef TRACE
#define deb(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define deb(...)
#endif

vi a;
int n, k, x;
unordered_map<int, vi> um;

int32_t main() {
    fast_io()
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> x;
        a.pb(x);
        um[x].pb(i);
    }
    int fi, it, it2, se, val;
    bool fl;
    int ways = 0;
    for(int i = 1; i < n; i++) {
        val = a[i]; 
        fl = true;
        
        if(val % k) {
            fl = false; 
        }
        
        fi = a[i] / k;
        se = a[i] * k;
        
        if(fl && (um.count(fi) && um[fi].size()) && (um.count(se) && um[se].size())) {
            it = lower_bound(all(um[fi]), i) - um[fi].begin();
            it2 = um[se].size() - (upper_bound(all(um[se]), i) - um[se].begin());
            //deb(i, a[i], it, it2);
            ways = ways + (it * it2 * 1ll);
        }
    }
    cout << ways;

	return 0;
}
