using namespace std;
#include <bits/stdc++.h>
#define rep(i,n) for(auto i=0; i<(n); i++)
#define repd(i,n) for(auto i=(n)-1; i>=0; i--)
#define repf(i,a,b) for(auto i=(a); i<=(b); i++)
#define repe(i,l) for(auto i: l)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w+",stdout);
#define read(x) freopen(x,"rt",stdin);
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define INF ((int)0x3f3f3f3f)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.precision(10);cout<<fixed;
template<class T> T abs(T x) { return x > 0 ? x : -x; }
template<class T> T mini(T x, T y) { return x <  y? x : y; }
template<class T> T maxi(T x, T y) { return x <  y? y : x; }
template<class T> T gcd(T a, T b) { return a%b? gcd(b, a%b) : b; }
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef long long ll;
typedef unsigned long long ull;

#define MOD ((int)1e9 + 7)
#define MAX 1000007

int cubeta[MAX];

int main() {_
	//Solution
	#ifdef LOCAL
		// read("368B.in");
		// rite("368B.out");
	#endif
	
	int n, m;
	cin >> n >> m;
	vi arreglo;
	vi arreglo_dif(n);
	rep(i, n){
		int x;
		cin >> x;
		cubeta[x]++;
		arreglo.pb(x);
	}
	int diff = 0;
	repd(i, n){
		if(cubeta[arreglo[i]] >= 1){
			diff++;
			cubeta[arreglo[i]] = 0;
		}
		arreglo_dif[i] = diff;
	}

	rep(i, m){
		int x;
		cin >>x;
		cout << arreglo_dif[x-1] << endl;
	}
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


/*

	g++-6 -std=c++11 368B.cpp -o 368B -DLOCAL && ./368B


*/




