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
const ll inf = (ll)1e15;
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
ll x1, x2, x3, p, n1, n2, n3;
string s;
ll a1, a2, a3;
bool check(ll x)
{
	ll req1 = max(0ll, a1 * x - x1);
	ll req2 = max(0ll, a2 * x - x2);
	ll req3 = max(0ll, a3 * x - x3);
	ll cost = req1 * n1 + req2 * n2 + req3 * n3;
	return cost <= p;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    
    f(i, s.size())
    {
	if(s[i] == 'B') a1++;
	else if(s[i] == 'S') a2++;
	else a3++;
    }

    cin >> x1 >> x2 >> x3 >> n1 >> n2 >> n3 >> p;
    ll l = 0, r = inf, ans = 0;
    while(l <= r)
    {
	ll m = (l + r) >> 1;
	if(check(m))
	{
		ans = m;
		l = m + 1;
	}else r = m - 1;
    }
    cout << ans << "\n";
    return 0;
}