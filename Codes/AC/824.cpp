#include <bits/stdc++.h>

#define INF 1000000021
#define MOD 1000000007
#define pb push_back
#define pp pop_back
#define pf push_front
#define sqr(a) (a)*(a)
#define mpr(a,b) make_pair(a, b)
#define all(x) (x.begin(), x.end())
#define deb(x) cerr << #x << " = " << x << '\n'
#define N 222222

using namespace std;

typedef long double ld;
typedef __int64 ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mpii;
typedef map<string, int> mpsi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef queue<int> qi;
typedef queue<ll> qll;
typedef queue<pair<int, int>> qpi;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pqll;
typedef priority_queue<pair<int,int>> pqpi;

const ld pi = 2 * acos(0.0);
template<class T> bool umin(T& a, T b){if(a>b){a=b;return 1;}return 0;}
template<class T> bool umax(T& a, T b){if(a<b){a=b;return 1;}return 0;}
template<class T> T gcd(T a, T b){return b ? gcd(b, a % b) : a;}
template<class T> T lcm(T a, T b){return a*(b/gcd(a,b));}
template<class T, class TT>bool pal(T a, TT n){int k=0;for(int i=0;i<=n/2;i++){if(a[i]!=a[n-i-1]){k=1;break;}}return k?0:1;}

//int month[] = {0, 31, 28, 31, 30, 31,30, 31, 31, 30, 31, 30, 31};

ll mypow(ll x)
{
	ll res = 1;
	while(x --)
		res *= 2;
	return res;
}
int main()
{
	ll n, k;
	cin >> n >> k;
	ll l = 1, r = mypow(n), ans = n;	
	while(1)
	{
		ll m = (l + r) / 2;
		if(m == k)
			break;
		if(m < k)
			l = m + 1;
		else
			r = m;
		ans --;
	}
	cout << ans;
	getchar();
	getchar();
	return 0;
	//freopen("Ganiyev.txt", "r", stdin);
	//freopen("Asadullo.txt", "w", stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);cout.tie(0);
	
	
	
	
	
	
	
	
	
	
}