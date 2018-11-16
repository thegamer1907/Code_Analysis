#include <bits/stdc++.h>
#include <chrono>
typedef long long ll;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long long ull;
typedef double db;
typedef unsigned char uchar;
using namespace std;
using namespace std::chrono;
#define var auto
#define rep(i,a,b) for(decltype(b) i=a, lim__lim=(b); i<=lim__lim; i++)
#define repr(i,a,b) for(decltype(b) i=b,lim__lim=(a); i>=lim__lim; i--)
#define fst first
#define sec second
inline int getint()
{
   char c = getchar(); int x = 0, mi = 1;
   while(c != EOF && c != '-' && !isdigit(c)) c = getchar();
   if(c == '-') { mi = -1; c = getchar(); }
   while(isdigit(c)) x = x * 10 + c - '0', c = getchar();
   return x * mi;
}
inline ll getll() { ll x; scanf("%lld",&x); return x; }
inline db getdb() { static double x; scanf("%lf",&x); return x; }
void prln() { printf("\n"); }
void pr(const char* s = " ") { printf("%s", s); }
void pr(bool x) { printf("%d", x); }
void pr(int x) { printf("%d", x); }
void pr(ll x) { printf("%lld", x); }
void pr(double x) { printf("%.2f", x); }
void pr(long double x) { printf("%.2f", (double)x); }
template<typename T> void pr(pair<T, T> x) { pr("("); pr(x.fst); pr(","); pr(x.sec); pr(")"); }
template<typename T> void pr(T const t[], int len, const char* h = "", const char* c = "\n")
{ printf("%s", h); rep(i, 0, len-1) pr(t[i]), pr(); printf("%s", c); }
#define prarr(arr,n) pr(arr, n, #arr ": ")
template<typename T> void updmax(T& a, T const& b) { a = max(a, b); }
template<typename T> void updmin(T& a, T const& b) { a = min(a, b); }
template<typename T> int Descr(T* from, T* to){ sort(from, to); return (int)(unique(from, to) - from); }
template<typename T> int LBound(T* from, T* to, T const& val) { return (int)(lower_bound(from, to, val) - from); }
template<typename T> int UBound(T* from, T* to, T const& val) { return (int)(upper_bound(from, to, val) - from); }
time_point<system_clock> timing; void TBegin() { timing = system_clock::now(); }
double TEnd(const char* c = "time: ") {
    var end = system_clock::now(); var d = duration_cast<microseconds>(end - timing);
    var dt = double(d.count()) * microseconds::period::num / microseconds::period::den;
    printf("%s%.10f", c, dt); return dt; }
void TTick(const char* c = "time:") { TEnd(c); TBegin(); }
// ======================================================================================

multiset<int> s, t;

int main()
{
    int n = getint(); rep(i, 0, n-1) s.insert(getint());
    int m = getint(); rep(i, 0, m-1) t.insert(getint());
    int ans = 0;
    for(var& i : s)
    {
        if(t.find(i-1) != t.end()) { ans += 1; t.erase(t.find(i-1)); }
        else if(t.find(i) != t.end()) { ans += 1; t.erase(t.find(i)); }
        else if(t.find(i+1) != t.end()) { ans += 1; t.erase(t.find(i+1)); }
    }
    pr(ans);
    return 0;
}

