#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define rep(i, a, b) for(int i=(a); i<(b); i++)
#define repi(i, a, b) for(int i=(a); i>(b); i--)
#define db(x) (cerr << #x << ": " << x << '\n')
#define sync ios_base::sync_with_stdio(false), cin.tie(NULL)
#define iceil(n, x) ((n + x - 1) / x)
#define ll long long
#define mp make_pair
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define sz size()
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vvi vector<vi>
#define fi first
#define se second
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define si(a) scanf("%d", &a)
#define sll(a) scanf("%lld", &a)
#define bitcount(x) __builtin_popcount(x)
#define cps CLOCKS_PER_SEC
#define PI acos(-1.0)
#define EPS 1e-9
#define mod 1000000007
#define MOD 1000000007
#define N 
using namespace std;

template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using maxpq = priority_queue<T>;

//All indexing is 0-based
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
			 tree_order_statistics_node_update> ordered_set;
//methods: find_by_order(k); & order_of_key(k);

ll nb, ns, nc, pb, ps, pc;
ll b, s, c, b_, s_, c_;
ll cb, cs, cc;
ll r;

bool can(ll k) {
	b = k * cb, s = k * cs, c = k * cc;
	b_ = max(0ll, b - nb);
	c_ = max(0ll, c - nc);
	s_ = max(0ll, s - ns);
	if(k == 1) db(s_);
	return b_ * pb + s_ * ps + c_ * pc <= r;
}

main()
{	
	#ifndef ONLINE_JUDGE
		freopen("C:\\Users\\HP\\Desktop\\input.txt", "r", stdin);
//		freopen("C:\\Users\\HP\\Desktop\\output.txt", "w", stdout);
	#endif
	clock_t clk = clock();
	cerr << "I will return...\n";
	
	string s;
	cin >> s;
	for(char c : s) {
		if(c == 'C') cc++;
		if(c == 'S') cs++;
		if(c == 'B') cb++;
	}
	
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	
	ll lo =0 , hi = 1e13;
	while(lo < hi) {
		ll m = iceil(lo + hi, 2);
//		db(m), db(lo);
		if(can(m)) lo = m;
		else hi = m - 1;
	}
	cout << lo << '\n';
	
	cerr << "...don't you ever hang your head.\n";
	cerr << "Time (in ms): " << double(clock() - clk) * 1000.0 / cps << '\n';
}







