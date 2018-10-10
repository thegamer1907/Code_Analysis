////////
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <complex>
#include <iomanip>
using namespace std;
typedef long long LL;
void guan() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define ls (rt<<1)
#define rs (rt<<1|1)
#define F first
#define S second
#define mst(x,a) memset(x,a,sizeof(x))
#define Pr pair<int,int>
#define Prl pair<LL, LL>
#define Prd pair<double, double>
#define root 1,cnum,1
#define For(i,b,c) for(int i=b;i<=c;i++)
#define lowbit(x) (x&(-x))
const int maxn = 2000020;
const LL mod = 998244353;
const LL mod2 = mod - 1;
const int INF = 0x7FFFFFFF;
const LL LINF = 0x7FFFFFFFFFFFFFFF;
const double pi = acos(-1.0);
const LL maxx = 1LL<<61;
const double eps = 1e-8;
//*********
 
int n, m, q, k;
inline int read() { return
    cin >> n
?1:0; }
int a[maxn];

void solve() {
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    LL ans = 0, sum1 = 0, sum2 = 0;
    int pre = 0, rear = n + 1;
    while(pre < rear) {
        if(sum1 == sum2) {
            ans = max(sum1, ans);
            sum1 += a[++pre];
        }
        else if(sum1 < sum2) {
            sum1 += a[++pre];
        }
        else {
            sum2 += a[--rear];
        }
    }
    cout << ans << endl;
}

int main() {
    guan();
    int t = 1;
    //cin >> t;
    int Cas = 1;
    while(t--) {
        while(read())
            //cout << "Case #" << Cas++ << ": " << endl;
            solve();
    }
    //cin >> t;
    return 0;
}