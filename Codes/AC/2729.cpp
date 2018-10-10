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
#define N 1000005
using namespace std;

template<typename T>
using maxpq = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using minpq = priority_queue<T>;

string t , p; //text & pattern
string s;
int n;

void preprocess(int b[],int m)
{
	//b is of length m+1
	b[0] = -1; //Null string doesn.t have a border
	int i=0 , j=-1; //i loops over the chars osf string 
					//j holds the length of previous widest border we're looking to extend
	while(i<m){
		while(j>=0 and p[j]!=p[i])
			j=b[j];
		j++ , i++;
		b[i] = j;
	}
}

int kmp()
{
	int n = t.length() , m = p.length();
	int b[m+1];
	preprocess(b,m);
	
	int i=0 , j=0; //See above logically considering p + t
	while(i<n){
		while(j>=0 and t[i]!=p[j])
			j = b[j];
		i++ , j++;
		if(j==m){
//			db(p);
//			db(i - m + 1);
			return i - m + 1;
			//cout << i-m << ' ';
			j = b[j];
		}
	}
	return -1;
}

inline int add(int a, int b){ ll c = a + b; if(c >= mod) c -= mod; return c;}

inline int sub(int a, int b){ int c = a - b; if(c < 0) c += mod; return c;}

inline int mul(int a, int b){ return (a * 1ll * b) % mod;}

int power(int a,int b,int m = mod)
{
	int res = 1;
	while(b > 0){
		if(b & 1) res = mul(res, a);
		a= mul(a, a);
		b >>= 1;
	}
	return res;
}


int pos;
bool can(int k) {
	if(s.substr(0, k) != s.substr(n-k, k)) {
			return 0;
	}
	p = s.substr(0, k);
	t = s.substr(1);
	
	pos = kmp();
	if(pos != -1 && pos != n - k) {
		return 1;
	}
	return 0;
}

int pre[N], suf[N];

inline int d(char c) {
	return c - '0';
}

void precompute() {

	rep(i, 1, n + 1) {
		pre[i] = add(d(s[i - 1]), mul(26, pre[i - 1]));
	}
	int i26 = 1;
	rep(i, 1, n + 1) {
		suf[i] = add(mul(i26, d(s[n - i])), suf[i - 1]);
//		db(i), db(pre[i]), db(suf[i]);
		i26 = mul(i26, 26);
	}
}

void solve()
{
	precompute();
	repi(i, n - 2, 0) {
		if(pre[i] == suf[i]) {
			p = s.substr(0, i);
			t = s.substr(1, n - 2);
			int pos = kmp();
			if(pos != -1) {
				cout << s.substr(0, i);
				exit(0);
			}
		}
	}
	cout << "Just a legend\n";
}

main()
{	
	#ifndef ONLINE_JUDGE
		freopen("C:\\Users\\HP\\Desktop\\input.txt", "r", stdin);
//		freopen("C:\\Users\\HP\\Desktop\\output.txt", "w", stdout);
	#endif
	sync;
	cerr << "I will return...\n";
	clock_t clk = clock();
	
	cin >> s;
//	cout << s << '\n';
	n = s.sz;
	solve();
	
	cerr << "Time (in ms): " << double(clock() - clk) * 1000.0 / cps << '\n';
	cerr << "...don't you ever hang your head.";
}




