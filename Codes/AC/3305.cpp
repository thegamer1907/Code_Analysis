#include<bits/stdc++.h>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define repi(i, a, b) for(int i=a; i>b; i--)
#define db(x) (cerr << #x << ": " << x << '\n')
#define sync ios_base::sync_with_stdio(false), cin.tie(NULL)
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
#define umapi umap<int, int>
#define mapi map<int, int>
#define uset unordered_set
#define useti uset<int>
#define seti set<int>
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
using maxpq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using minpq = priority_queue<T>;

main()
{	
	#ifndef ONLINE_JUDGE
		freopen("C:\\Users\\HP\\Desktop\\input.txt", "r", stdin);
//		freopen("C:\\Users\\HP\\Desktop\\output.txt", "w", stdout);
	#endif
	clock_t clk = clock();
	cerr << "I will return...\n";
	
	int n; cin >> n;
	int a[n];
	
	int mn = mod, j = -1;
	
	rep(i, 0, n) {
		cin >> a[i];
		a[i] = ceil((a[i] - (i)) / double(n));
		if(mn > a[i]) {
			mn = a[i];
			j = i;
		}
	}
	
	cout << j + 1 << '\n';
	
	cerr << "...don't you ever hang your head.";
	cerr << "Time (in ms): " << double(clock() - clk) * 1000.0 / cps << '\n';
}







