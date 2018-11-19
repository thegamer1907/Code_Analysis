#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;

//Macros
#define pb                    push_back
#define SS                    stringstream
#define space                 " "
#define REP(i,a,b) for(int i = a; i < (b); i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define ff first
#define ss second
#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

//Debug
template<class T1> void deb(T1 e1)
{
	cout << e1 << '\n' << flush;
}
template<class T1, class T2> void deb(T1 e1, T2 e2)
{
	cout << e1 << space << e2 << '\n' << flush;
}
template<class T1, class T2, class T3> void deb(T1 e1, T2 e2, T3 e3)
{
	cout << e1 << space << e2 << space << e3 << '\n' << flush;
}
template<class T1, class T2, class T3, class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4)
{
	cout << e1 << space << e2 << space << e3 << space << e4 << '\n' << flush;
}
template<class T1, class T2, class T3, class T4, class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5)
{
	cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << '\n' << flush;
}
template<class T1, class T2, class T3, class T4, class T5, class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5, T6 e6)
{
	cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << space << e6 << '\n' << flush;
}

template<class T> T gcd(T a, T b) { if (b == 0)return a; return gcd(b, a%b); }
template<class T> T lcm(T a, T b) { return (a*b) / gcd(a, b); }
template < class T > string converter(T n) { SS x; x << n; return x.str(); }
inline bool EQ(double a, double b) { return fabs(a - b) < 1e-9; }

//Constant
const int INF = 1 << 29;

//Typedefs
typedef  unsigned long long      ull;
typedef  long long               ll;
typedef  map<string, int>        msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<char, int>          mci;
typedef  map<int, string>	     mis;
typedef  pair<int, int> 	     pii;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef  vector<int> 	         vi;
typedef  vector<string> 	     vs;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  vector< pii >           vii;

int main() {_
    char a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    set<char> left, right;
    vector<string> d(n);
    REP(i, 0, n) {
        cin >> d[i];
        left.insert(d[i][0]); right.insert(d[i][1]);
    }

    REP(i, 0, n) {
        char l = d[i][0];
        char r = d[i][1];
        if (l == a && r == b) {
            cout << "YES\n";
            return 0;
        } else if (r == a && left.count(b)) {
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";

	return 0;
}
