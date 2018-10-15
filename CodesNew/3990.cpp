#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pl;
typedef vector<ll> vl;

#define sl(x) scanf("%d",&x)
#define pl(x) printf("%d\n",x)
#define sz(x) ((int)x.size())
#define s(x) sort(x.begin(),x.end())
#define all(v) v.begin(),v.end()
#define debug(x) cerr << #x << " " << x << "\n";
#define debug2(x, n) cerr << #x << "\n"; f(i, n) cerr << i << " " << x[i] << "\n";
#define r(v) {reverse(all(v));}
#define pb push_back
#define F first
#define S second
#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)

const ll mod = 1000000007;
const ll inf = (ll)1e18 + 10;
const ld eps = 1e-12;
const ll N = 1000005;
const ll LOGN = 19;
const ld PI = 3.14159265358979323846;
template <typename T>
T power2(T a, ll b) { if(b == 0) return 1; if(b == 1) return a; T x = power2(a, b / 2); x = x * x; if(b % 2) x = x * a; return x;}
ll gcd(ll a, ll b) {if(a < b) swap(a, b); while(b) {ll t = b; b = a % b; a = t;} return a;}
ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; if(b == 1) return (a % m); ll x = power(a, b / 2, m); x = mul(x, x, m); if(b % 2) x = mul(x, a, m); return x;}
int n, q, a[N];
long long sum[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum[i] = (i ? sum[i - 1] : 0) + a[i];
    }

    int ptr = 0;
    long long off = 0;
    for (int i = 0; i < q; i++) {
        long long k;
        cin >> k;
        int l = ptr, r = n - 1, nxt = n - 1;
        long long ded = (l ? sum[l - 1] : 0) + off;
        while (l <= r) {
            int m = (l + r) >> 1;
            if (sum[m] - ded >= k) {
                nxt = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        if (sum[n - 1] - ded < k) {
            ptr = 0;
            off = 0;
        } else {
            long long xx = sum[nxt] - ded - k;
            if (xx) {
                ptr = nxt;
                off = a[ptr] - xx;
            } else {
                ptr = (nxt + 1) % n;
                off = 0;
            }
        }

        cout << (n - ptr) << "\n";
    }
    return 0;
}