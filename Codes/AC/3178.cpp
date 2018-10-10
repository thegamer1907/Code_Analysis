#include <bits/stdtr1c++.h>
using namespace std;

#define DEBUG__

#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PI 3.141592653589793
#define ff first
#define ss second
#define pb push_back
#define epb emplace_back

#define MSET(a, s) memset(a, s, sizeof(a))
#define ALL(a) a.begin(), a.end()
#define LEN(a) ((sizeof a)/(sizeof a[0]))
#define STR to_string
#define sqr(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define modm(x) ((((x) % MOD) + MOD) % MOD)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,a,b) for(int i=a;i<=b;++i)
#define DWN(i,a,b) for(int i=a-1;i>=b;--i)
#define DWNI(i,a,b) for(int i=a;i>=b;--i)
#define REP(i, a) for(int i=0;i<a;++i)
#define REPI(i, a) for(int i=0;i<=a;++i)
#define REP1(i, a) for(int i=1;i<=a;++i)

#ifdef DEBUG__
    #define WAT(x) cerr<<(#x)<<"="<<(x)<<endl
    #define WAT2(x,y) cerr<<(#x)<<"="<<(x)<<" "<<(#y)<<"="<<(y)<<endl
    #define WAT3(x,y,z) cerr<<(#x)<<"="<<(x)<<" ";WAT2(y,z)
#else
    #define WAT(x)
    #define WAT2(x,y)
    #define WAT3(x,y,z)
#endif
#define PARR(a,s,e) for(size_t _c=size_t(s);_c<size_t(e);++_c)cout<<(a[_c])<<(_c==size_t(e-1)?"\n":" ");
#define PDIGS(x,n) cout<<fixed<<setprecision(n)<<(x)<<endl
#define P1(x) cout<<(x)<<"\n"
#define P2(x,y) cout<<(x)<<" "<<(y)<<"\n"
#define P3(x,y,z) cout<<(x)<<" "<<(y)<<" "<<(z)<<"\n"
#define PE1(x) cerr<<(x)<<endl
#define PE2(x,y) cerr<<(x)<<" "<<(y)<<endl
    
typedef long long ll;
typedef pair<int, int> ii;

// MODULE fast io
inline char read() {
#ifdef DEBUG__
    return getchar();
#else
    static const int MAX_BUF = 1 << 16;
    static char buf[MAX_BUF];
    static int pos = 1, cap = 1;
    if (pos == cap) {
        if (!cap) return 0;
        cap = static_cast<int> (fread(buf, 1, MAX_BUF, stdin)); pos = 0;
    }
    return buf[pos++];
#endif
}

template <class T> inline void read(T & res) {
#ifdef DEBUG__
    cin >> res;
#else
    char c; do c = read(); while (isspace(c));
    bool neg = c == '-';
    if(neg) c = read();
    for (res = 0; isdigit(c); c = read()) res = res * 10 + c - '0';
    if (neg) res = -res;
#endif
}

template <class T1, class T2> inline void read(T1 & r1, T2 & r2) { read(r1); read(r2); }
template <class T1, class T2, class T3> inline void read(T1 & r1, T2 & r2, T3 & r3) { read(r1); read(r2); read(r3); }
//*/

// MODULE extra ostream operators
template <class T1, class T2> std::ostream& operator<<(std::ostream& os, const pair<T1, T2> & p){ return os << p.ff << "," << p.ss; }
template <class T> std::ostream& operator<<(std::ostream& os, const vector<T> & v){ REP(i, (int)v.size()){ if(i) os << " "; os << v[i];} return os; }

// start of actual solution
int N, a;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int minr = INT_MAX, mini = 0;
    read(N);
    REP(i, N) {
        read(a);
        int r;
        int aa = a - i;
        if (aa <= 0) {
            r = i;
        } else {
            r = ((aa - 1) / N + 1) * N + i;
        }
        //WAT3(i, aa, r);
        if (r < minr) {
            mini = i;
            minr = r;
        }
    }

    P1(mini + 1);

    return 0;
} 
