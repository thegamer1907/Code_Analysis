/**
///////////////////////////////////////////////////
IF YOU READ THIS MESSAGE, YOU ARE GAY.
///////////////////////////////////////////////////
*/
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#define ld long double
typedef long long ll;

#define sii(x) scanf("%d",&x)
#define pii(x) printf("%d\n",x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n",x)
#define present_set_map(container, element) (container.find(element) != container.end())
#define present_vec(container, element) (find(all(container),element) != container.end())
#define mp make_pair
#define all(x) x.begin(),x.end()
#define all_rev(x) x.rbegin(),x.rend()
#define pb emplace_back
#define fr first
#define se second
#define MAX 200005
#define INF 1<<60
#define TC int tc;cin>>tc;while(tc--)
#define DEBUG(x) {cout << #x << "=" << x <<endl;}
#define DEBUG2(x, y) {cout << #x << "=" << x << " " << #y << "=" << y <<endl;}
#define DEBUG3(x, y, z) {cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;}
#define clr(x) memset(x,0,sizeof(x))
#define REP(i, n) for(auto i=0;i<(n);i++)
#define FOR(i, a, b) for(auto i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(auto i=(a);i>=(b);i--)
#define LOOP(itr, x) for(auto itr: x)
#define decimalpoints(x) cout<<setprecision(x)<<fixed;
#define pint pair<int,int>
#define plll pair<ll,ll>
ll dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
ll dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

inline int two(int n)
{
    return 1 << n;
}

inline int test(int n, int b)
{
    return (n >> b) & 1;
}

inline void set_bit(int &n, int b)
{
    n |= two(b);
}

inline void unset_bit(int &n, int b)
{
    n &= ~two(b);
}

inline int last_bit(int n)
{
    return n & (-n);
}

inline int ones(int n)
{
    int res = 0;
    while (n && ++res) n -= n & (-n);
    return res;
}

ll gcd(ll a, ll b)
{
    return (a ? gcd(b % a, a) : b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll modPow(ll a, ll b, ll MOD)
{
    ll x = 1, y = a;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            x = (x * y) % MOD;
        }
        b /= 2;
        y = (y * y) % MOD;
    }
    return x;
}

ll modInverse(ll a, ll p)
{
    return modPow(a, p - 2, p);
}
bool isPrime(ll x)
{
    for(ll i = 2 ; i <= sqrt(x); i ++)
    {
        if(!(x%i))
            return false;
    }
    return true;

}
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
#define fastIO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define N 105
#define INF (ll)10e18
int dp[N];
ll ans;

ll f(ll j, ll maks){

ll atb=0;
ll cnt=0;
for(int i = j ; i < maks ; i ++){
    for(int k = 0 ; k < maks; k ++){
        if(k >=j and k <= i){
            if((!dp[k]))
                cnt++;
        } else {
            if(dp[k])
                cnt++;
        }
    }
    atb = max(atb,cnt);
    cnt=0;
}
return atb;
}
int main()
{
    fastIO;
    ll n;cin>>n;
    for(ll i = 0; i < n; i ++){
        cin>>dp[i];
    }
    for(int i = 0 ; i < n ; i ++){
        ans = max(ans, f(i,n));
    }
    cout<<ans;
    return 0;
}
