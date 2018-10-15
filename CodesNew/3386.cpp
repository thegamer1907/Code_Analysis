// TEMPLATE START

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<LL> VLL;
typedef vector<ULL> VULL;
typedef vector<bool> VB;
typedef vector<double> VD;
typedef pair<int,int> PII;
typedef vector<VI> VVI;
typedef vector<PII> VPII;
typedef vector<VPII> VVPII;

#define PI 3.141592653589793
#define MOD 1000000007
#define INF 2147483647

#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for (int i=(a); i<(b); ++i)
#define FORD(i,a,b) for (int i=((int)(a)); i>=(b); --i)
#define FOREACH(i,x) for(__typeof((x).begin()) i=(x).begin(); i!=(x).end(); ++i)
#define FORDEACH(i,x) for(__typeof((x).rbegin())i=(x).rbegin(); i != (x).rend(); ++i)
#define ALL(u) (u).begin(),(u).end()
#define SORT(v) sort(ALL(v));
#define REV(v) reverse(ALL(v));
#define XSORT(v, m) REP(i, v.size()) m[i] = i; sort(ALL(m), [=](int i, int j) {return v[i] < v[j];}); SORT(v);

#define PB push_back
#define MP make_pair
#define X first
#define Y second

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define PREC(n) cout<<fixed<<setprecision(n);

#define DB(x) cerr << __LINE__ << ": " << #x << " = " << (x) << endl;
#define DBV(v) cerr << __LINE__ << ": " << #v << "\n" << v.size() << "\n" << v << "\n";


template <class T, class S> ostream& operator << (ostream& os, const pair<T, S>& p) {
        os << p.X << " " << p.Y;
    return os;
}

template <class T, class S> istream& operator >> (istream& is,  pair<T, S>& p) {
        is >> p.X >> p.Y;
    return is;
}

template <class T> ostream& operator << (ostream& os, const vector<T>& v) {
    REP(i, v.size())
        os << v[i] << " \n" [i == v.size()-1];
    return os;
}

template <class T> istream& operator >> (istream& is,  vector<T>& v) {
    REP(i, v.size())
        is >> v[i];
    return is;
}


// TEMPLATE END


// SOLUTION START

const int maxN = 1e5 + 1;
int main() {
    FAST_IO
	int n, m, r = 0, a, t = 0;
    cin >> n >> m;
    REP(i, n) {
        cin >> a;
        t = max(a, t);
        r += a;
    }
    r += m;
    cout << max(t, (r + n - 1) / n) << " " << t + m << "\n";
    return 0;
}

// SOLUTION END

