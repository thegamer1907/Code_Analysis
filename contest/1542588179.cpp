#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<algorithm>
#include<iostream>
#include<cstring>
#include<fstream>
#include<bitset>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define INF 0X3F3F3F3F
#define N 100005
#define M 200005
#define LL long long
#define ULL unsigned long long
#define FF(i, a, b) for(int i = a; i <= b; ++i)
#define RR(i, a, b) for(int i = a; i >= b; --i)
#define FJ(i, a, b) for(int i = a; i < b; ++i)
#define SC(x) scanf("%d", &x)
#define SCC(x, y) scanf("%d%d", &x, &y)
#define SCCC(x, y, z) scanf("%d%d%d", &x, &y, &z)
#define SS(x) scanf("%s", x)
#define PR(x) printf("%d\n", x)
#define CL(a, x) memset(a, x, sizeof(a))
#define _P fd[rt]
#define _L fd[rt << 1]
#define _R fd[rt << 1 | 1]
#define MID int mid = ((l + r) >> 1)
#define lson rt<<1 ,l, mid
#define rson rt<<1 | 1, mid + 1, r
#define VI vector<int>
#define db double
#define PII pair<int, int>
#define PLL pair<unsigned long long, unsigned long long>
#define MP make_pair
#define PB push_back
#define IN freopen("in.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
using namespace std;
const int MOD = 1000000007;
const double PI = acos(-1.0);
const double EPS = 1e-8;
const int dir[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
inline void II(int &n){char ch = getchar(); n = 0; bool t = 0;
for(; ch < '0'; ch = getchar()) if(ch == '-') t = 1;
for(; ch >= '0'; n = n * 10 + ch - '0', ch = getchar()); if(t) n =- n;}
inline void OO(int a){if(a < 0) {putchar('-'); a = -a;}
if(a >= 10) OO(a / 10); putchar(a % 10 + '0');}
inline int sgn(double x){return (x > EPS) - (x < -EPS);}
int n;
struct node{
    double t;
    bool s;
    node(){}
    node(double _t, bool _s){
        t = _t;
        s = _s;
    }
    bool operator < (const node&rhs)const {
        return t < rhs.t;
    }
}a[100];
int h, m, s, t1, t2;
int main(){
   // IN;
    SCCC(h, m, s);
    if(h == 12) h = 0;
    int hs = h * 3600 + m * 60 + s;
    int ms = m * 60 + s;
    int ss = s;
    double ha = hs * 1.0 / 12 / 3600;
    double ma = ms * 1.0 / 3600;
    double sa = ss * 1.0 / 60;
    SCC(t1, t2);
    if(t1 == 12) t1 -= 12;
    if(t2 == 12) t2 -= 12;
    double a1 = t1 * 1.0 / 12;
    double a2 = t2 * 1.0 / 12;
    a[1] = node(ha, 0);
    a[2] = node(ma, 0);
    a[3] = node(sa, 0);
    a[4] = node(a1, 1);
    a[5] = node(a2, 1);
    sort(a + 1, a + 1 + 5);
    bool ok = 0;
    for(int i = 1; i <= 4; ++i) if(a[i].s && a[i + 1].s) ok = 1;
    if(a[1].s && a[5].s) ok = 1;
    puts(ok ? "YES" : "NO");
    return 0;
}
