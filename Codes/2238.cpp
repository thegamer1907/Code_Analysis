#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
#include<unordered_map> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define li long long int
#define ll li
#define readi(x) scanf("%d",&x)
#define  reads(x)  scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define si short int
// #define MAXN 1000000000000000
#define MINN -1000000000000000000
// #define INTMAX 1000001000
#define pii pair<ll,ll> 
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 200005
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 3.1415926535
#define lgn 20

// #define INTMAX 200000000  
// using namespace boost;
// #define si short int
 
using namespace std;
using namespace __gnu_pbds;             
typedef priority_queue<pii, vector<pii> > max_pq;
// typedef priority_queue<pii, vector<pii> , greater<pii >  > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
 
// using namespace __gnu_pbds;         
// typedef priority_queue<pair<ll,char> , vector<pair<ll , char> > > max_pq;
// typedef priority_queue<pii , vector<pii > ,greater<pii > > min_pq;
typedef tree<pii , null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> OST;
// typedef priority_queue<pair < ll , pair < pii , ll > >  , vector<pair < ll , pair < pii , ll > >  > ,greater<pair < ll , pair < pii , ll > >  > > min_pq;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
// #def nn 100010
#define INTMAX 1000000000
#define eps 1e-9
#define MAXN 205
#define MAXM 205*205
#define INF 100000
ll n;
ll ar[ N ];
map < ll,ll > suff,pre;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin >> n;
    ll sum = 0;
    for ( ll i = 1; i <= n; i ++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    ll p = 0,s = 0;
    for ( ll i = 1; i <= n; i ++)
    {
        p += ar[i];
        pre[p]=1;
    }
    ll ans = 0;
    for ( ll i = n; i >= 1; i --)
    {
        s += ar[i];
        if ( pre[s] == 1 and 2*s <= sum)
            ans = s;
    }
    cout << ans;    
    




}