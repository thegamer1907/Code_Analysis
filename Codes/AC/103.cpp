#include<bits/stdc++.h>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define repi(i, a, b) for(int i=a; i>b; i--)
#define db(x) (cerr << #x << ": " << x << '\n')
#define sync ios_base::sync_with_stdio(false), cin.tie(NULL)
//#define int long long
#define ll long long
#define PI acos(-1.0)
#define mp make_pair
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define fi first
#define se second
#define umap unordered_map
#define umapi umap<int, int>
#define mapi map<int, int>
#define uset unordered_set
#define useti uset<int>
#define seti set<int, int>
#define pqueue priority_queue
#define si(a) scanf("%d", &a)
#define sll(a) scanf("%lld", &a)
#define bitcount(x) __builtin_popcount(x)
#define EPS 1e-9
#define mod 1000000007
#define N 
#define int ll
using namespace std;

template<typename T>
using maxpq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using minpq = priority_queue<T>;

main()
{	
	#ifndef ONLINE_JUDGE
		freopen("C:\\Users\\HP\\Desktop\\in.in", "r", stdin);
		freopen("C:\\Users\\HP\\Desktop\\out.out", "w", stdout);
		//freopen("C:\\Users\\HP\\Desktop\\err.out", "w", stderr);
	#endif
	
	cerr << "I will return...\n";
	
	int n;
	cin >> n;
	
	int a[n + 1], p[n + 1] = {0}, s[n + 1] = {0};
	int S = 0;
	rep(i, 1, n + 1) {
		cin >> a[i];
		S += a[i];
	}
	
	rep (i, 1, n + 1) {
		p[i] = p[i - 1] + a[i];
	}
	 
	for(int i = 1, j = n; i <= n; i++, j--) {
		s[i] = s[i - 1] + a[j];
//		db(i), db(s[i]);
	}
	
	vi vci, vcj;
	
	rep(i, 1, n - 1) {
		if (p[i] * 3 == S) {
			vci.pb(i + 1);
//			db(i + 1);
		}
	}
	
	for(int i = 1, j = n - 1; j > 1; i++, j--) {
		if (s[i] * 3 == S) {
			vcj.pb(j);
//			db(j);
		}
	}
	
	reverse(all(vcj));
	
	int ans = 0;
	
	for(int i : vci) {
		int j = lower_bound(all(vcj), i) - vcj.begin();
		if(j < vcj.size()) {
			ans += vcj.size() - j;
		}
	}
	
	cout << ans << '\n';
	
	cerr << "...don't you ever hang your head.";
}






