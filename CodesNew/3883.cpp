#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define bitCount __builtin_popcount
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
typedef set<int>::iterator sit;
typedef set<ll>::iterator sllt;
typedef set<char>::iterator sct;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
typedef multiset<int>::iterator msit;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const int alphabet = 26;
const int inf = INT_MAX;
const ll linf = 1e18+9;
#define forn(i, n) for(i = 0; i < (ll)n; i++)
#define for1(i, n) for(i = 1; i <= (ll)n; i++)
#define forv(i, v) for(i = 0; i < v.size(); i++)
#define forab(i, a, b) for(i = a; i <= (ll)b; i++)
#define Sort(v) sort(v.begin(), v.end())
#define bend(v) v.begin(), v.end()
#define sz(v) v.size()
inline ll cnm(char ch){	return (ch-'0'); }
inline ll cap(char ch){	return (ch-'a'); }
inline void instr(string& s, ll& n){ cin>>s;	n = s.length(); }
inline void instr(string& s){ cin>>s; }
template<typename T> T gcd(T a, T b){ if(a==0) return b; return gcd(b%a, a); }

ll a[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll i, j, k, m, n;
	cin>>n;
	ll sum = 0, maxi = -1;
	for(i = 0; i < n; i++){
		cin>>a[i]; sum += a[i];
		maxi = max(a[i], maxi);
	}
	ll x = sum/(n-1);
	if(sum%(n-1) != 0) x++;
	cout<<max(maxi, x);
//	ll lo = 1, hi = 1e9;
//	while(lo < hi){
//		ll mid = (lo+hi)/2;
//		ll rhs = mid*(n-1);
//		if(sum <= rhs) hi = mid;
//		else lo = mid+1;
//	}
//	cout<<lo;
//	sort(a, a+n);
//	ll ans = 0;
//	if(a[n-1] - a[0] <= 1){
//		ans = a[n-1] + 1;
//	}
//	else ans = a[n-1];
//	cout<<ans;
    return 0;
}


