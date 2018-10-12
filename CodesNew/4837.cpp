#include <bits/stdc++.h>
typedef long long LL;
#define rep(i,a,b) for(auto i=(a);i<=(b);++i)
#define per(i,a,b) for(auto i=(a);i>=(b);--i)
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define ls rt<<1
#define rs rt<<1|1
#define root 1,cnum,1
#define Pr pair<int,int>
#define Prd pair<double,double>
#define Prl pair<LL,LL>
#define fi first
#define se second
#define Abs(x) (x>0?x:x*-1)
#define lowbit(x) (x&(-x))
#define mst(a,b) memset(a,b,sizeof(a))
using namespace std;
const int INF = 0x7FFFFFFF;
const LL LINF = 0x7FFFFFFFFFFFFF;
void guan() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

const LL mod = 1e9+7; 
const int maxn = 1010101;
char a[maxn], b[maxn];
Pr t[maxn];
int dp[maxn];
vector<int> g[maxn];

int ok(int x, int n, int m) {
    int pos = 1;
    for(int i = 1;i <= n&&pos<=m;i++) {
        if(t[i].se<=x) continue;
        if(a[i]==b[pos]) ++pos;
    }
    return pos>m;
}

int main() {
    guan();
    int d, h, k, p;
    int n, m;
    while(cin >> a+1 >> b+1) {
        n = strlen(a+1);
        rep(i,1,n) cin >> t[i].fi, t[i].se = i;
        sort(t+1,t+1+n);
        int m = strlen(b+1);
        rep(i,1,n) dp[i] = INF/100;
        int l = 0, r = n;
        while(l<r) {
            int mid = (l+r+1)>>1;
            if(ok(mid,n,m)) l = mid;
            else r =  mid - 1;
        }
        cout << l << endl;
    }
    return 0;
}