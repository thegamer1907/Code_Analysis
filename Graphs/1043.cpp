#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long long ull;
typedef double db;
typedef unsigned char uchar;

using namespace std;
#define var auto
#define rep(i,a,b) for(int i=a, lim__lim=(b); i<=lim__lim; i++)
#define repr(i,a,b) for(int i=b,lim__lim=(a); i>=lim__lim; i--)

#define X first
#define Y second

// #define BUF_SIZE 400000
// bool IOerror = 0;
// inline char nc()
// {
// 	static char buf[BUF_SIZE], *p1 = buf + BUF_SIZE, *pend = buf + BUF_SIZE;
// 	if(p1 == pend) {
// 		p1 = buf;
// 		pend = buf + fread(buf, 1, BUF_SIZE, stdin);
// 		if(pend == p1) { IOerror = 1; return -1; } }
// 	return *p1++;
// }
// inline bool blank(char ch) { return ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t'; }
// #undef BUF_SIZE
// inline int getint() {
// 	int x=0; char ch; int sgn = 1;
// 	while(blank(ch = nc())); if(IOerror) return 0; if(ch=='-')sgn=-1,ch=nc();
// 	for(x = ch - '0'; (ch = nc()) >= '0' && ch <= '9'; x = x * 10 + ch - '0');
// 	return x * sgn;
// }
// inline int getint() { int x; scanf("%d",&x); return x; }
inline int getint()
{
   char c = getchar(); int x = 0, minus = 1;
   while(c != EOF && c != '-' && !isdigit(c)) c = getchar();
   if(c == '-') { minus = -1; c = getchar(); }
   while(isdigit(c)) { x = x * 10 + c - '0'; c = getchar(); }
   return x * minus;
}

inline ll getll() { ll x; scanf("%lld",&x); return x; }
inline db getdb() { static double x; scanf("%lf",&x); return x; }
template<typename T> void updmax(T& a, T const& b) { a = max(a, b); }
template<typename T> void updmin(T& a, T const& b) { a = min(a, b); }
template<typename T> int Descr(T* from, T* to)
{ sort(from, to); return (int)(unique(from, to) - from); }
template<typename T> int LBound(T* from, T* to, T const& val)
{ return (int)(lower_bound(from, to, val) - from); }
template<typename T> int UBound(T* from, T* to, T const& val)
{ return (int)(upper_bound(from, to, val) - from); }
time_point<system_clock> timing;
void TimingBegin() { timing = system_clock::now(); }
double TimingEnd(const char* c = "time:")
{
    var end = system_clock::now();
    var d = duration_cast<microseconds>(end - timing);
    var dt = double(d.count()) * microseconds::period::num / microseconds::period::den;
    printf("%s %.10f", c, dt);
    return dt;
}
void TimingTick(const char* c = "time:") { TimingEnd(c); TimingBegin(); }
template<typename T> vector<int> arr(int size) { return move(vector<int>(size)); }
template<typename T> struct opt { T value; bool valid; };
// ======================================================================================

int a[1005000];

int main()
{
    int n = getint();
    int m = getint();
    rep(i, 1, n-1) a[i] = getint();
    int cur = 1;
    while(cur != m && cur != n)
    {
        cur += a[cur];
    }
    
    printf("%s\n", cur == m ? "YES" : "NO");
    
    return 0;
}
