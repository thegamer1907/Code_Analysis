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
	b[0] = -1; //Null string doesn't have a border
	int i=0 , j=-1; //i loops over the chars osf string 
					//j holds the length of previous widest border we're looking to extend
	while(i<m){
		while(j>=0 and p[j]!=p[i])
			j=b[j];
		j++ , i++;
		b[i] = j;
	}
}

inline int d(char c) {
	return c - '0';
}

void solve()
{
	p = s;
	int a[s.sz + 1];
	preprocess(a, s.sz);
	
	int i = s.sz;
	while(i > 0) {
		if(a[i] == 0) {
			cout << "Just a legend\n";
			return;
		}
		
		rep(j, 1, s.sz) {
			if(a[j] == a[i]) {
				cout << s.substr(0, a[i]);
				return;
			}
		}
		
		i = a[i];
	}
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




