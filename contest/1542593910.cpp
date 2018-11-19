/*
 * if you are interested in the reference code here,
 * see https://github.com/georeth/OJLIBS for more information
 *
 * Solution Author : Georeth Chow <georeth2010@gmail.com>
 */
#include <cstdio>
#include <cmath>
#include <climits>      // INT_MIN LLONG_MIN
#include <cfloat>       // DBL_MIN DBL_MAX
#include <cstring>      // memset
#include <cstdlib>      // malloc
#include <cstdint>      // int64_t
#include <cinttypes>    // PRId64 SCNd64
#include <ctime>        // clock
#include <cassert>      // assert
#include <limits>       // numeric_limits
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <tuple>        // pair, tuple
#include <iostream>     // be careful.
                        // mix with cstdio: slowwww...
                        // mix with cstdio + fastio: bug
#include <sstream>
#include <algorithm>
using namespace std;    // use as solution header. name polution is fine.
#ifdef LOCAL_JUDGE
#  define pr_debug(...) fprintf(stderr, __VA_ARGS__)
#  define pr_line() fprintf(stderr, "%s: %d\n", __FILE__, __LINE__)
#else
#  define pr_debug(...)
#  define pr_line()
#endif
template <typename T>
bool chmax(T &m, const T &v) { if (v > m) return m = v, true; return false; }
template <typename T>
bool chmin(T &m, const T &v) { if (v < m) return m = v, true; return false; }
static const int HMAX32 = INT32_MAX / 2;
static const int HMIN32 = -HMAX32;
static const int64_t HMAX64 = INT64_MAX / 2;
static const int64_t HMIN64 = -HMAX64;
#define ALL(x) begin(x), end(x)
#define FOR0(i,n) for(int i=0,i##end=n;i<i##end;i++)
#define FOR1(i,n) for(int i=1,i##end=n;i<=i##end;i++)
#define FOR(i,a,b) for(int i=a,i##end=b;i<=i##end;i++)
#define FOD0(i,n) for(int i=(n)-1;~i;i--)
#define FOD1(i,n) for(int i=n;i;i--)
#define FOD(i,a,b) for(int i=a,i##end=b;i>=i##end;i--)
#define FORE(i,x)for(__typeof(x.end())i=x.begin();i!=x.end();++i)
namespace fio {
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef double lf;
typedef long double llf;
template<typename T> inline T abs(T a){return a>0?a:-a;}
struct Cg{inline char operator()(){return (char)getchar();}};
struct Cp{inline void operator()(char x){putchar(x);}};
struct Cpe{inline void operator()(char x){putc(x,stderr);}};
inline bool IS(char x){return x==10||x==13||x==' ';}template<typename T>struct Fr{T P;inline Fr&operator,(int &x)
{x=0;char t=P();while((t<'0'||t>'9')&&t!='-')t=P();bool f=0;if(t=='-')t=P(),f=1;x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';if(f)x=-x;return *this;}inline operator int(){int x;*this,x;return x;}inline Fr&operator,(ll &x){x=0;char t=P();while((t<'0'||t>'9')&&t!='-')t=P();bool f=0;if(t=='-')t=P(),f=1;x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';if(f)x=-x;return *this;}inline operator ll(){ll x;*this,x;return x;}inline Fr&operator,(char &x)
{for(x=P();IS(x);x=P())continue;return *this;}inline operator char(){char x;*this,x;return x;}inline Fr&operator,(char *x){char t=P();for(;IS(t);t=P())continue;if(~t){for(;!IS(t)&&~t;t=P())*x++=t;}*x++=0;return *this;}inline Fr&operator,(lf &x){x=0;char t=P();while((t<'0'||t>'9')&&t!='-')t=P();bool f=0;if(t=='-')t=P(),f=1;x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';if(t=='.'){lf u=0.1;for(t=P();t>='0'&&t<='9';t=P(),u*=0.1)x+=u*(t-'0');}if(f)x=-x;return *this;}inline operator lf(){lf x;*this,x;return x;}inline Fr&operator,(llf &x){x=0;char t=P();while((t<'0'||t>'9')&&t!='-')t=P();bool f=0;if(t=='-')t=P(),f=1;x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';if(t=='.'){lf u=0.1;for(t=P();t>='0'&&t<='9';t=P(),u*=0.1)x+=u*(t-'0');}if(f)x=-x;return *this;}inline operator llf()
{llf x;*this,x;return x;}inline Fr&operator,(uint &x){x=0;char t=P();while(t<'0'||t>'9')t=P();x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';return *this;}inline operator uint(){uint x;*this,x;return x;}inline Fr&operator,(ull &x){x=0;char t=P();while(t<'0'||t>'9')t=P();x=t-'0';for(t=P();t>='0'&&t<='9';t=P())x=x*10+t-'0';return *this;}inline operator ull(){ull x;*this,x;return x;}};
template<typename T>struct Fw{T P;inline Fw&operator,(int x){if(x){if(x<0)P('-'),x=-x;char s[10];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator()(int x){if(x){if(x<0)P('-'),x=-x;char s[10];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator,(uint x){if(x){char s[10];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}
inline Fw&operator()(uint x){if(x){char s[10];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator,(ll x){if(x){if(x<0)P('-'),x=-x;char s[19];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator()(ll x){if(x){if(x<0)P('-'),x=-x;char s[19];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator,(ull x){if(x){char s[20];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator()
(ull x){if(x){char s[20];int c=0;while(x)s[c++]=x%10+'0',x/=10;while(c--)P(s[c]);}else P('0');return *this;}inline Fw&operator,(char x){P(x);return *this;}inline Fw&operator()(char x){P(x);return *this;}inline Fw&operator,(const char *x){while(*x)P(*x++);return *this;}
inline Fw&operator()(const char *x){while(*x)P(*x++);return *this;}inline Fw&operator()(lf x,int y){if(y){lf t=0.5;for(int i=y;i--;)t*=0.1;if(x>=0)x+=t;else x-=t,P('-');*this,(ll)(abs(x));P('.');if(x<0)x=-x;while(y--){x*=10;x-=floor(x*0.1)*10;P(((int)x)%10+'0');}}else if(x>=0)*this,(ll)(x+0.5);else *this,(ll)(x-0.5);;return *this;}inline Fw&operator()(llf x,int y){if(y){lf t=0.5;for(int i=y;i--;)t*=0.1;if(x>=0)x+=t;else x-=t,P('-');*this,(ll)(abs(x));P('.');if(x<0)x=-x;while(y--){x*=10;x-=floor(x*0.1)*10;P(((int)x)%10+'0');}}else if(x>=0)*this,(ll)(x+0.5);else *this,(ll)(x-0.5);;return *this;}};
}
fio::Fw<fio::Cp> fout;
fio::Fw<fio::Cpe> ferr;
fio::Fr<fio::Cg> fin;
/* =====  SOLUTION START  ===== */
// formalize:
// dimension analysis:
bool first[300], second[300];
int main() {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string w;
        cin >> w;
        if (w == pass) {
            cout << "YES" << endl;
            return 0;
        }
        first[(int)w[0]] = true;
        second[(int)w[1]] = true;
    }
    cout << (second[(int)pass[0]] && first[(int)pass[1]] ? "YES" : "NO") << endl;
    return 0;
}
