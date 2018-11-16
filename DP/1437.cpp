#include <bits/stdc++.h>

using namespace std; 

#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mmp make_pair
#define st first
#define nd second
#define rd third
#define ll long long
#define pii pair <int, int>
#define tri pair <pii, int>
#define itr pair <int, pii>
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); i++)
#define FOR(i, a, n) for (int (i) = (a); (i) < (int)(n); i++)
#define FORN(i, a, n) for (int (i) = (a); (i) > (int)(n); i--)
#define Rep(i, n) for (int (i) = 0; (i) <= (int)(n); i++)
#define For(i, a, n) for (int (i) = (a); (i) <= (int)(n); i++)
#define Forn(i, a, n) for (int (i) = (a); (i) >= (int)(n); i--)
#define pi 3.1415926535897932384626433832795028841971
//#define LOCAL

const int INF = 1e9; 
const int Maxn = 1005; 
const int dx[] = {-1, 0, 1, 0}; 
const int dy[] = {0, 1, 0, -1}; 

struct pos { int first, second, third; }; 

int n; 
vector <int> vs, vn; 

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout); 
	#endif
	
	scanf("%d", &n); 
	int a = 0; 
	vn.pb(0); 
	REP(i, n)
	{
		int x; 
		scanf("%d", &x); 
		a += x; //printf("%d\n", x); 
		vs.pb(a); 
		vn.pb(a); 
	}
	
	int ma = -INF; 
	REP(i, n)
	{
		FOR(j, i, n)
		{
			if ((j - i + 1) - 2 * (vs[j] - vn[i]) > ma) 
				ma = (j - i + 1) - 2 * (vs[j] - vn[i]); 
		}
	}
	
	printf("%d\n", vs[n - 1] + ma); 
	
	return 0; 
}