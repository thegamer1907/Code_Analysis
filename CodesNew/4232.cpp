#include <bits/stdc++.h>
typedef long long LL;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
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

const LL mod = 998244353;
const int maxn = 1010101;
char a[maxn], b[maxn];
int vis[maxn];
string s[maxn];
int dp[maxn], tdp[maxn];

string ans[maxn];

int main() {
    guan();
    int d, h, k, p;
    int n, m;
    while(cin >> n) {
        mst(dp,0), mst(tdp,0);
        rep(i,1,n) cin >> s[i];
        s[0] = "#";
        ans[n] = s[n];
        for(int i = n-1;i;i--) {
            for(int j = 0;j < s[i].length()&&j < ans[i+1].length();j++) {
                if(s[i][j]<ans[i+1][j]) {
                    ans[i] = s[i];
                    break;
                }
                else if(s[i][j]==ans[i+1][j]) ans[i].push_back(s[i][j]);
                else break;
            }
        }
        rep(i,1,n) cout << ans[i] << endl;
    }
    return 0;
}