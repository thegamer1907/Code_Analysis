#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <sstream>
#include <queue>
#include <map>
#include <functional>
#include <bitset>

using namespace std;
#define pb push_back
#define mk make_pair
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define mk make_pair
#define fi first
#define se second
#define ALL(A) A.begin(), A.end()
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define repr(i, n) for(int (i)=(int)(n);(i)>=0;(i)--)
#define repab(i,a,b) for(int (i)=(int)(a);(i)<=(int)(b);(i)++)
#define reprab(i,a,b) for(int (i)=(int)(a);(i)>=(int)(b);(i)--)
#define m ((l+r)/2)
#define sc(x) scanf("%d", &x)
#define pr(x) printf("x:%d\n", x)
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define frein freopen("in.txt", "r", stdin)
#define freout freopen("out.txt", "w", stdout)
#define freout1 freopen("out1.txt", "w", stdout)
#define lb puts("")
#define PI M_PI
#define debug cout<<"???"<<endl
#define mid ((l+r)>>1)
const ll mod = 1000000007;
//const int INF = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double eps = 1e-6;
template<class T> T gcd(T a, T b){if(!b)return a;return gcd(b,a%b);}

const int maxn = 1e5+10;

int n,k,a[maxn],cnt[maxn],le = 1, ri = 0, now, nxt;
ll sum, dp[2][maxn];

void query(int l, int r)
{
    while(ri < r){
        sum += 1LL*cnt[a[++ri]];
        cnt[a[ri]]++;
        //printf("ri:%d, sum:%I64d\n", ri, sum);
    }
    while(ri > r){
        cnt[a[ri]]--;
        sum -= 1LL*cnt[a[ri--]];
    }
    while(le > l){
        sum += 1LL*cnt[a[--le]];
        cnt[a[le]]++;
    }
    while(le < l){
        cnt[a[le]]--;
        sum -= 1LL*cnt[a[le++]];
    }
    //printf("query(%d,%d):%I64d\n", l, r, sum);
}

void solve(int l, int r, int L, int R)
{
    if(l > r) return;
    dp[nxt][m] = INF;
    int M, ed = min(R,m);
    for(int i = L; i <= ed; i++){
        query(i, m);
        if(dp[now][i-1] + sum < dp[nxt][m]){
            dp[nxt][m] = dp[now][i-1] + sum;
            M = i;
        }
    }
    //printf("solve(%d,%d,%d,%d), dp[%d]:%I64d\n", l,r,L,R,m,dp[nxt][m]);
    solve(l,m-1,L,M);
    solve(m+1,r,M,R);
}

int main()
{
    //frein;
    while(cin >> n >> k){
        for(int i = 1; i <= n; i++) sc(a[i]);
        memset(cnt, 0, sizeof(cnt));
        now = 0; nxt = 1;
        le = 1; ri = 0; sum = 0;
        memset(dp, INF, sizeof(dp));
        dp[now][0] = 0;
        for(int i = 0; i < k; i++){
            solve(1,n,1,n);
            swap(now,nxt);
        }
        printf("%I64d\n", dp[now][n]);
    }
    return 0;
}
