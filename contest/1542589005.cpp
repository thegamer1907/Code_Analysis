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

int main() {
    boost;
    if(fopen("input.txt", "r")){
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    }
    string p;
    cin >> p;
    int n;
    cin >> n;
    vector<string> v(n);
    vvi g(26, vi(26, 0));
    rep(i, 0, n){
        cin >> v[i];
    }
    rep(i, 0, n){
        g[v[i][0] - 'a'][v[i][1] - 'a'] = 1;
        g[v[i][1] - 'a'][v[i][0] - 'a'] = 1;
        rep(j, 0, n){
            if(i != j){
                g[v[j][1] - 'a'][v[i][0] - 'a'] = 1;
                g[v[i][1] - 'a'][v[j][0] - 'a'] = 1;
            }
        }
    }

    if(g[p[0] - 'a'][p[1] - 'a'])cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}
//  Train Insane or Remain the same
 