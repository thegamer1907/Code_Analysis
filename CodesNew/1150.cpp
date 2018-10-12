#include <bits/stdc++.h>
using namespace std;
#define dbg(...)        cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<endl;
#define rep(i, j, n)    for(int i=j;i<n;i++)
#define per(i, j, n)    for(int i=n;i>j;--i)
#define fase_read_init  const int MAXS = 32*1024*1024;char buf[MAXS],*ch;
#define read(x)         while(*ch<=32) ++ch;for(x=0; *ch>='0'; ++ch) x=x*10+*ch-'0';
#define read_init       ch=buf-1;fread(buf,1,MAXS,stdin);
#define SIZE(a)         ((int)a.size())
#define ALL(a)          a.begin(), a.end()
#define LL              ((l + r) >> 1)
#define RR              (LSON + 1)
template<class T> ostream& operator<<(ostream &os, const vector<T> &t) {os<<"{";for(auto &i : t) os<<i<<",";os<<"}"<<endl;return os;}
template<class T, size_t n> ostream& operator<<(ostream &os, const array<T,n> &t) {os<<"{";rep(i, 0, n) os<<t[i]<<",";os<<"}"<<endl;return os;}
template<class S, class T>  ostream& operator<<(ostream &os, const pair<S,T>  &t) {return os<<"("<<t.first<<","<<t.second<<")";}
template<class T> inline bool MX(T &l,const T &r) {return l<r?l=r,1:0;}
template<class T> inline bool MN(T &l,const T &r) {return l>r?l=r,1:0;}
typedef long long           ll;
typedef unsigned long long  ull;
typedef pair<int, int>      pii;
const double  EPS  = 1e-8;
const int     INF  = 0x3f3f3f3f;
const int     MOD  = (int)1e9 + 7;
const int     MAXN = (int)2e5 + 5;
void solve();
int main() {
#ifdef chutzpah
    clock_t start = clock();
#endif
    solve();
#ifdef chutzpah
    cerr << static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
#endif
    return 0;
}
/**********************************************************************************/
void solve() {
    ll n;
    cin >> n;
    ll low = 0, top = n;
    while(top - low > 1) {
        ll mid = (low + top) >> 1;
        ll nn = n, eat = 0;
        while(nn > 0) {
            eat += min(nn, mid);
            nn -= min(nn, mid);
            nn -= (nn) / 10;
        }
        if(eat * 2 >= n) top = mid;
        else low = mid;
    }
    cout << top << endl;
}
