// testing other contestant's wrong solution with my improvement

/*---------------------------------------------------------------------
Author : Sandeep (www.linkedin.com/in/sandeepg97)
Codechef,Codeforces,CSAcademy : sandeepg97, Hackerrank : sndp_487cs
Contact-info : sandeepg.97@gmail.com +91-98968 68854
---------------------------------------------------------------------*/
#include <algorithm>
#include <array>
#include <bitset>
#include <ccomplex>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
using namespace __gnu_pbds;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vpii vector<pii>
#define si set<int>
#define mii map<int, int>
#define indexed_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define minHeap priority_queue<int,vi,greater<int>> 
#define maxHeap priority_queue<int>

#define all(x) x.begin(), x.end()
#define F first
#define S second
#define I insert
#define ER erase
#define FI find
#define B() begin()
#define E() end()
#define pb push_back
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define rrep(i, b, a) for (int i = (b); i >= (a); i--)
#define repl(i, a, b) for (ll i = (a); i <= (b); i++)
#define rrepl(i, b, a) for (ll i = (b); i >= (a); i--)
#define rbl(i, a) for (auto& i : a)
#define smax(a, b) a = max(a, b)
#define smin(a, b) a = min(a, b)
#define memset(x, y) memset(x, y, sizeof x)
#define prec(x) cout << fixed << setprecision(x)
#define left(x) (x << 1)
#define right(x) ((x << 1) | 1)

#define s(a) scanf("%d", &a)
#define s2(a, b) scanf("%d%d", &a, &b)
#define s3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define s4(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define sl(a) scanf("%lli", &a)
#define sl2(a, b) scanf("%lli%lli", &a, &b)
#define sl3(a, b, c) scanf("%lli%lli%lli", &a, &b, &c)
#define sl4(a, b, c, d) scanf("%lli%lli%lli%lli", &a, &b, &c, &d)
#define D(x) \
    int x;    \
    s(x)
#define D2(x, y) \
    int x, y;    \
    s2(x, y)
#define D3(x, y, z) \
    int x, y, z;    \
    s3(x, y, z)
#define D4(x, y, z, w) \
    int x, y, z, w;    \
    s4(x, y, z, w)
#define p(x) printf("%d ", x)
#define pn(x) printf("%d\n", x)
#define pl(x) printf("%lli ", x)
#define pln(x) printf("%lli\n", x)
#define R(x) resize(x)

#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

#define eps 1e-9
#define mid(x, y) (x) + ((y) - (x)) / 2
#define mid1(x, y) (x) + ((y) - (x) + 1) / 2

bool isPowerOfTwo(ll x)
{ return (x != 0 && (x & (x - 1)) == 0); }

int len_of_number(ll n)
{ int len(0); while (n != 0) { ++len; n /= 10;} return len;}

bool is_palindrome(string a){return a == string(a.rbegin(),a.rend());}

int sum_of_digits(ll n)
{int sod = 0; while (n != 0) { sod += (n % 10); n /= 10;}return sod;}

ll fast_exp(ll x, ll i)
{ll ans = 1;while (i > 0) { if (i & 1) ans = (ans * x); i >>= 1; x = (x * x); }return ans;}

ll fast_exp(ll x, ll i, ll mod)
{ll ans = 1;while (i > 0) { if (i & 1) ans = (ans * x) % mod; i >>= 1; x = (x * x) % mod;}return ans;}

ll modInverse(ll x, ll mod) 
{return fast_exp(x, mod - 2, mod); } // mod is prime

ll gcd(ll x, ll y)
{ ll t; while (y != 0) { t = x % y; x = y; y = t; } return x;}

const ll MOD = 1e9 + 7;
const ll INF = numeric_limits<ll>::max();
const ll NEGINF = numeric_limits<ll>::min();

const int WHITE = 0, GREY = 1, BLACK = 2;
const int MAXN = 0;

vvi adjList;
vi color;

void dfs(int v, int p = -1){
	rbl(c,adjList[v]){
		if(c != p) dfs(c,v);
	}
}

int solve(int _T){
    //one go 
    int n;
    cin >> n;
    vll a(n);
   	rep(i,0,n-1) cin >> a[i];
   	ll s, e;
   	s = e = 0;
   	int i = 0, j = n - 1;
   	ll ans = 0;
   	while(i < j || (i == j && s != e)){
   		if(s == e){
   			ans = max(ans,s);
   			s += a[i++];
   			e += a[j--];
   		}
   		else if(s < e){
   			s += a[i++];
   		}
   		else{
   			e += a[j--];
   		}
   	}
   	if(s == e){
   			ans = max(ans,s);
   			// s += a[i++];
   			// e += a[j--];
   		}
   	cout << ans << endl;
    return 0;
}

int main(){
    _ 
    int test_cases = 1;

    // cin >> test_cases;
    // s(test_cases);
    rep(T,0,test_cases-1){
        solve(T);
    }
    return 0;
}