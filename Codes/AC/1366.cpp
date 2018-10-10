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
#define N 100005
#define inf 1e15

int n, k;
int a[N];

vi tmp;

int f(int mid) {
    for(int i = 1; i <= n; i++) {
        tmp[i] = a[i] + mid * i;
    }
    sort(tmp.begin() + 1, tmp.begin() + n + 1);
    int sum = 0;
    for(int i = 1; i <= mid; i++) {
        sum += tmp[i];
    }
    return sum;
}

int32_t main() {
    fast_io()
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++)  cin >> a[i];
    tmp.assign(n + 2, 0);
    tmp[0] = inf;
    int lo = 0;
    int hi = n;
    pi res = {-1, INT_MAX};
    while(lo <= hi) {
        int mid = (lo + hi) >> 1;
        int ans = f(mid);
        if(ans <= k) {
            res = {mid, ans};
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    cout << res.fi << " " << res.se;
	return 0;
}
