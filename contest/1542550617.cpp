//#include <unordered_set>
//#include <unordered_map> 
#include <functional>
#include <stdexcept>
#include <streambuf>
#include <exception>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <typeinfo>
#include <utility>
#include <complex>
#include <numeric>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cassert>
#include <iomanip>
#include <cstring>
#include <locale>
#include <memory>
#include <iosfwd>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <ios>
#include <new>
#include <set>
    
using namespace std;
     
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define al 0x3F3F3F3F
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define in insert
#define ppf pop_front
#define endl '\n'
#define resize(v) v.resize(unique(all(v)) - v.begin());
//#define int long long

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <int, ll> pil;
typedef pair < ll, int > pli;
typedef pair <double, double> pdd;
typedef pair <int, double> pid;
typedef pair <double, int> pdi;
typedef pair <ll, double> pld;
typedef pair <double, ll> pdl;
    
const int mod = (int)1e9 + 7;
const int MAX_N = (int)1e5 + 123;
const int N = 1e6 + 3;
const int INF = al;           
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;
const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

int n, k, a[MAX_N][5];
vector <int> v;

inline int gcd(int a, int b) {
	if (!b) return a;
    return gcd(b, a % b);                  
}                                    
                                                                                                      
inline void boost() {
    ios_base :: sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);
}
    
inline void Solve() {      	
    boost();
    cin >> n >> k;
    int cnt = 0;
    for (int i = 1; i <= n; i ++) {
    	cnt = 0;
    	for (int j = 1; j <= k; j ++)
    		
    		cin >> a[i][j], cnt = cnt * 10 + a[i][j];
    	v.pb(cnt);
    }
    sort(all(v));
    resize(v);
    if (!v[0]) cout << "YES", exit(0);
    for (int i = 0; i < sz(v); i ++)
    	for (int j = 0; j < sz(v); j ++) {
    		if (i == j) continue;
    		int sum = v[i] + v[j];
    		int check = 0;
    		while (sum) check = max(check, sum % 10), sum /= 10;
    		if (check < 2) cout << "YES", exit(0);
    	}
	cout << "NO";

    
}         
 
main () {
//	freopen("inverse.in", "r", stdin);
//    freopen("inverse.out", "w", stdout);                   	
    int tt = 1;
    while (tt--) {
        Solve();
    }
}
		 	 		  			    	     			  			