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
const int MAX_N = (int)2e5 + 123;
const int N = 1e6 + 3;
const int INF = al;           
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;
const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};
  
string T;
ll a, b, c, ans, Na, Nb, Nc, Pa, Pb, Pc, r;

inline bool check(ll v) {
	ll cnt = 0;
	if (Na < v * a) {
		cnt += (v * a - Na) * Pa;
	}
	if (Nb < v * b) {
		cnt += (v * b - Nb) * Pb;
	}
	if (Nc < v * c) {
		cnt += (v * c - Nc) * Pc;
	}
	return (cnt <= r);
}
                                                                                                       
inline void boost() {
    ios_base :: sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);
}
     
inline void Solve() {                                
    boost();   
    cin >> T;
    for (int i = 0; i < sz(T); i ++) {
    	if (T[i] == 'B') a ++;
    	else if (T[i] == 'S') b ++;
    	else c ++;
    }
    cin >> Na >> Nb >> Nc;
    cin >> Pa >> Pb >> Pc;
    cin >> r;
    ll l = 1, r = 1e14;
    while (l <= r) {
    	ll mid = l + r >> 1;
    	if (check(mid)) l = mid + 1, ans = mid;
    	else r = mid - 1;
    }
    cout << ans;
}
   
main () {
//  freopen("differ.in", "r", stdin);
//  freopen("differ.out", "w", stdout);                     
    int tt = 1;
    while (tt--) {
        Solve();
    }
}