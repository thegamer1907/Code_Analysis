// start of CP 2.0
#include <bits/stdc++.h>

//____By:sirjan13____

#define int long long
#define ld long double
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
#define fi first
#define se second
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
#define N 300015

int n, k;
vi pre, a;

int32_t main() {
    fast_io()
    
    cin >> n >> k;
    pre.assign(n + 1, 0);
    a.pb(-1);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.pb(x);
        if(!x) pre[i]++;
        pre[i] += pre[i - 1];
    }
    
    //for(int i = 0; i < n; i++) deb(i, a[i], pre[i]);
    int it, elements, res = 0, start = 0, end = 0;
    for(int i = 1; i <= n; i++) {
        it = (upper_bound(all(pre), pre[i - 1] + k) - pre.begin() - 1);
        elements = it - i + 1;
        //deb(i, it, elements);
        if(elements > res) {
            res = elements;
            start = i;
            end = it;
        }
    }
    
    cout << res << endl;
    for(int i = 1; i < start; i++) cout << a[i] << " ";
    if(res > 0)
        for(int i = start; i <= end; i++) cout << 1 << " ";
    for(int i = end + 1; i <= n; i++) cout << a[i] << " ";
    
    
    
	return 0;
}
