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
#define N 1000005
#define NN 10000005
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

vi primes;
bool isPrime[NN];
int spf[NN];
//int cnt[NN];
map<int, int> m;
int n;
int a[N];

void sieve(int n)
{
	//bool isPrime[n+1];
	//int spf[n+1]; //Smallest Prime Factor
	
	memset(isPrime, 1, sizeof isPrime);
	isPrime[0] = isPrime[1] = 0;
	
	for(int i=2;i<=n;i++){
		if(isPrime[i]){
			primes.pb(i);
			spf[i] = i;
		}	
			
		for(int j=0;j<primes.size() && primes[j] <= spf[i] &&\
			i*primes[j] <= n;j++){
				isPrime[i*primes[j]] = 0;
				spf[i*primes[j]] = primes[j];
		}
	}
	//rep(i, 1, 101) cout << i << ' ' << spf[i] << '\n';
}

void factorize(int n) {
	while(n > 1) {
		int p = spf[n];
		m[p]++;
		while(p == spf[n]) {
			n /= spf[n];
		}
	}
}

main()
{	sync;
	#ifndef ONLINE_JUDGE
		freopen("/home/tarun/Desktop/input.txt", "r", stdin);
//		freopen("/home/tarun/Desktop/output.txt", "w", stdout)
	#endif
	clock_t clk = clock();
	cerr << "I will return...\n";
	cin >> n;
	rep(i, 0, n) cin >> a[i];
	sieve(NN - 5);
	for(int p : primes) m[p] = 0;
	
	rep(i, 0, n) {
		factorize(a[i]);
	}
	
	int last = 2;

	auto it = ++m.begin();
	while(it != m.end()) {
		it -> se += m[last];
		last = it -> fi;
		it++;
	}

	int q; cin >> q;
	while(q--) {
		int l, r; cin >> l >> r;
		if(r <= 1) cout << 0 << '\n';
		else if(l <= 2) cout << (--m.upper_bound(r))->se << '\n';
		else {
			int rp = (--m.upper_bound(r)) -> fi;   //Largest prime <= than r
			int lp = (--m.lower_bound(l)) -> fi;   //Largest prime less than l
			//db(lp), db(rp);
			//db(m[lp]), db(m[rp]);
			cout << m[rp] - m[lp] << '\n';
		}
		
	}
	
	cerr << "...don't you ever hang your head.\n";
	cerr << "Time (in ms): " << double(clock() - clk) * 1000.0 / cps << '\n';
}







