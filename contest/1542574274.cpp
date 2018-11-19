/*    
 *  eat_code    
 *  IIIT Allahabad
 */
#include <bits/stdc++.h>
//#include "pretty_print.h"
using namespace std;

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define CONTAINS(a, x) (a.find(x) != a.end())
#define ALL(x) x.begin(), x.end()
#define SZ(x) (int)x.size()
#define nl cout << endl
#define F first
#define S second

#define what_is(x) cout << #x << " = " << x << endl
#define boost ios::sync_with_stdio(false);cin.tie(NULL)
#define CASET int ___T, case_n = 1; cin >> ___T; while (___T-- > 0) 


#define rep(it, st, en) for(ll it = st; it < en; it++)
#define rep1(it, st, en) for(ll it = st; it <= en; it++)
#define per(it, st, en) for(ll it = en - 1; it >= st; it--)

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll,ll> pll;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<ii> vii;
typedef vector<vi> vvi;

ll INF = 1E9;
ll M = 1E9 + 7;

inline ll power (ll a,ll p){
    ll res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}

template <typename T> ostream& operator<<(ostream& os, const vector<T> &p){os << "[ "; for (T x: p) os << x << " "; os << "]" << endl; return os;}
template <typename T> ostream& operator<<(ostream& os, const set<T> &p){os << "{ "; for (T x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const map<Tk, Tv> &p){os << "{ "; for (pair<Tk, Tv> x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const pair<Tk, Tv> &p){os << "{" << p.first << ',' << p.second << "}";return os;}
int g[2];
int h, m, s, t1, t2;
void update(int x){
    if(t1 <= x && x < t2)g[1] = 0;
    else g[0] = 0;
}
int main() {
    boost;
    if(fopen("input.txt", "r")){
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    }
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12)h = 0;
    if(t1 > t2)swap(t1, t2);
    //initially both paths unblocked
    g[0] = g[1] = 1;
    //range conversion to 0 - 11
    update(h);
    update(m / 5);
    update(s / 5);
    if(g[0] || g[1])cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
//  Train Insane or Remain the same
 