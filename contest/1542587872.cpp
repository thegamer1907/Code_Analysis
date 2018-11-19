#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i=0; i<n; i++)
#define repl(i,n) for(i=1; i<=n; i++)

#define sz(x) (int) x.size()
#define pb push_back
#define all(x) x.begin(),x.end()
#define uu first
#define vv second
#define mem(x, y) memset(x, y, sizeof(x))
#define un(x) x.erase(unique(all(x)), x.end())

#define sdi(x) scanf("%d", &x)
#define sdii(x, y) scanf("%d %d", &x, &y)
#define sdiii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sdl(x) scanf("%lld", &x)
#define sdll(x, y) scanf("%lld %lld", &x, &y)
#define sdlll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define sds(x) scanf("%s", x)
#define pfi(x) printf("%d\n", x)
#define pfii(x, y) printf("%d %d\n", x, y)
#define pfiii(x, y, z) printf("%d %d %d\n", x, y, z)
#define pfl(x) printf("%lld\n", x)
#define pfll(x, y) printf("%lld %lld\n", x, y)
#define pflll(x, y, z) printf("%lld %lld %lld\n", x, y, z)

#define eps 1e-9
#define OK cerr << "ok\n"
#define DB(x) cerr << #x << " = " << x << endl

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair <int, int> pii;

inline int setBit(int N, int pos) { return N=N | (1<<pos); }
inline int resetBit(int N, int pos) { return N= N & ~(1<<pos); }
inline bool checkBit(int N, int pos) { return (bool)(N & (1<<pos)); }

//int kx[] = {+2, +1, -1, -2, -2, -1, +1, +2};
//int ky[] = {+1, +2, +2, +1, -1, -2, -2, -1}; //Knight Direction
//int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
//int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //Four & Eight Direction

double h, m, s, t1, t2;
double hh, mm, ss, tt1, tt2;

bool check() {
    if(tt1 > tt2) swap(tt1, tt2);
    vector <double> v = { hh, mm, ss };
    sort(all(v));
    if(tt1 < v[0]) {
        if(tt2 < v[0]) return true;
        else if(tt2 > v[2]) return true;
        else return false;
    }
    else if(tt1 < v[1]) {
        if(tt2 > v[0] && tt2 < v[1]) return true;
        else return false;
    }
    else if(tt1 < v[2]) {
        if(tt2 > v[1] && tt2 < v[2]) return true;
        else return false;
    }
    else {
        if(tt2 > v[2]) return true;
        else return false;
    }
}

int main() {
//    assert(freopen("in.txt","r",stdin));
//    assert(freopen("out.txt","w",stdout));

    while(scanf("%lf %lf %lf %lf %lf", &h, &m, &s, &t1, &t2) == 5) {
        hh = (h + m/60 + s/3600) * 30;
        mm = (m + s/60) * 6;
        ss = s*6;
        tt1 = t1*30;
        tt2 = t2*30;
        puts(check()? "YES" : "NO");
    }

    return 0;
}
