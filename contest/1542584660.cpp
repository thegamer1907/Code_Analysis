#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>
#include <algorithm>
#include <stack>
#include <map>
#include <string>
#include <set>
#include <bitset>
#include <stdlib.h>
#define Clear(x,y) memset (x,y,sizeof(x))
#define Close() ios::sync_with_stdio(0)
#define Open() freopen ("more.in", "r", stdin)
#define get_min(a,b) a = min (a, b)
#define get_max(a,b) a = max (a, b);
#define y0 yzz
#define y1 yzzz
#define fi first
#define se second
#define pii pair<int, int>
#define pli pair<long long, int>
#define pll pair<long long, long long>
#define pdi pair<double, int>
#define pdd pair<double, double>
#define vei vector<int>
#define vel vector<long long>
#define pb push_back
#define pl c<<1
#define pr (c<<1)|1
#define lson l,mid,pl
#define rson mid+1,r,pr
#define ALL(x) x.begin(),x.end()
namespace fastIO {
    #define BUF_SIZE 100000
    //fread -> read
    bool IOerror = 0;
    inline char nc() {
        static char buf[BUF_SIZE], *p1 = buf + BUF_SIZE, *pend = buf + BUF_SIZE;
        if(p1 == pend) {
            p1 = buf;
            pend = buf + fread(buf, 1, BUF_SIZE, stdin);
            if(pend == p1) {
                IOerror = 1;
                return -1;
            }
        }
        return *p1++;
    }
    inline bool blank(char ch) {
        return ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t';
    }
    inline void read(int &x) {
        char ch;
        while(blank(ch = nc()));
        if(IOerror)
            return;
        for(x = ch - '0'; (ch = nc()) >= '0' && ch <= '9'; x = x * 10 + ch - '0');
    }
    #undef BUF_SIZE
};
typedef unsigned long long ull;
template <class T> inline T lowbit (T x) {return x&(-x);}
template <class T> inline T sqr (T x) {return x*x;}
template <class T>
inline bool scan (T &ret) {
    char c;
    int sgn;
    if (c = getchar(), c == EOF) return 0; //EOF
    while (c != '-' && (c < '0' || c > '9') ) c = getchar();
    sgn = (c == '-') ? -1 : 1;
    ret = (c == '-') ? 0 : (c - '0');
    while (c = getchar(), c >= '0' && c <= '9') ret = ret * 10 + (c - '0');
    ret *= sgn;
    return 1;
}
const double pi = 3.14159265358979323846264338327950288L;
using namespace std;
const long long mod = 1000000007;
#define maxn 100005
#define maxm maxn*4
#define maxq 400005
#define INF 1e9
#define eps 1e-6
//-----------------morejarphone--------------------//

pdi a[11];
double h, m, s, t1, t2;

int main () {
    for (int i = 0; i < 5; i++) {
        cin >> a[i].fi;
        a[i].se = i;
    }
    a[0].fi += a[1].fi/60 + a[2].fi/60/60;
    a[1].fi += a[2].fi/60;
    a[0].fi = a[0].fi/12*360;
    for (int i = 1; i <= 2; i++) a[i].fi = a[i].fi/60*360;
    for (int i = 3; i <= 4; i++) a[i].fi = a[i].fi/12*360;
    sort (a, a+5);
    for (int i = 0; i < 5; i++) {
        int x = a[i].se, y = a[(i+1)%5].se;
        if ((x == 3 && y == 4) || (x == 4 && y == 3)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}  

/*
3 4
0 1 0 1
1 0 1 0
1 1 1 1

*/















