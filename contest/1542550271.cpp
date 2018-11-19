#include <bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
typedef pair<char,char> cc;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<ll, ll> l4;
typedef long double ld;
typedef pair<ld,ld> ldd;
const ld pi = acosl(-1);
const int maxn = 100010;
const ll mod = 1e9+7;
const int inf = 1e9;
const ld eps = 1e-8;
int n,k;
int a[maxn],cnt[maxn];
ll cost;
ll dp[21][maxn];
int nowl,nowr;

int add(int x) {return cnt[x]++;}
int del(int x) {return --cnt[x];}

void shift(int l, int r) {
    while (nowl < l) cost -= del(a[nowl++]);
    while (nowl > l) cost += add(a[--nowl]);
    while (nowr < r) cost += add(a[++nowr]);
    while (nowr > r) cost -= del(a[nowr--]);
}

void sol(int l,int r, int pl, int pr, int k) {
    if (l > r) return;
    int m = (l+r)/2;
    int best = pl;
    rep(i, pl, min(pr+1,m)) {
        shift(i+1,m);
        if (dp[k][m] > dp[k-1][i]+cost) {
            best = i;
            dp[k][m] = dp[k-1][i]+cost;
        }
    }
    sol(l,m-1,pl,best,k);
    sol(m+1,r,best,pr,k);
}

int main() {
    scanf("%d%d",&n,&k);
    rep(i, 0, n) scanf("%d",a+i+1);
    memset(dp, 7, sizeof(dp));
    dp[0][0] = 0;
    nowl = 1;
    rep(i, 1, k+1) {
    sol(1,n,0,n-1,i);
    }
    printf("%lld\n",dp[k][n]);
    return 0;
}
