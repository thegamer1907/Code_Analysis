# include <iostream>
# include <sstream>
# include <cstdio>
# include <cstdlib>
# include <algorithm>
# include <string>
# include <cstring>
# include <cmath>
# include <stack>
# include <queue>
# include <vector>
# include <list>
# include <map>
# include <set>
# include <deque>
# include <iterator>
# include <functional>
# include <bitset>
# include <climits>
# include <ctime>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define odd(x) ((x)&1)
#define sqr(x) ((x)*(x))
#define mp make_pair
#define pb push_back
#define fir first
#define sec second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define rep_it(it,x) for (__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)
#define ____ puts("\n_______________\n\n")
#define debug(x) ____; cout<< #x << " => " << (x) << endl
#define debug_pair(x) cout<<"\n{ "<<(x).fir<<" , "<<(x).sec<<" }\n"
#define debug_arr(x,n) ____; cout<<#x<<":\n"; rep(i,0,n) cout<<#x<<"["<<(i)<<"] => "<<x[i]<<endl
#define debug_set(x) ____; cout<<#x<<": \n"; rep_it(it,x) cout<<(*it)<<" "; cout<<endl
#define debug_map(x) ____; cout<<#x<<": \n"; rep_it(it,x) debug_pair(*it)
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int oo = /*2 * 1000 * 1000 * 1000*/0x3f3f3f3f;
const int _cnt = 1000 * 1000 + 7;
const int _p = 1000 * 1000 * 1000 + 7;
const double PI=acos(-1);
const double eps=1e-9;
int o(int x) { return x%_p; }
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int lcm(int a, int b) { return a / gcd(a, b)*b; }

void file_put() {
    freopen("filename.in", "r", stdin);
    freopen("filename.out", "w", stdout);
}

int n,k,a[105005],p[105005],pl=0,pr=-1;
ll cnt=0,dp[30][105005];

void add(int x) { cnt+=(p[x]++); }
void del(int x) { cnt-=(--p[x]); }

void solve(int t,int l,int r,int opt_l,int opt_r){
    if (l>r) return ;
    int mid=(l+r)>>1,rr=min(opt_r,mid-1),opt=-1;
    while (pr>mid) del(a[pr--]);
    while (pr<mid) add(a[++pr]);
    rep(j,opt_l,rr) {
        while (pl>j+1) add(a[--pl]);
        while (pl<j+1) del(a[pl++]);
        if (dp[t-1][j]+cnt<=dp[t][mid]) {
            dp[t][mid]=dp[t-1][j]+cnt;
            opt=j;
        }
    }
    //printf("%d %d %d %d %I64d\n",t,l,r,opt,dp[t][mid]);
    solve(t,l,mid-1,opt_l,opt);
    solve(t,mid+1,r,opt,opt_r);
}

int main() {
    //file_put();

    scanf("%d%d",&n,&k);
    rep(i,1,n) scanf("%d",&a[i]);
    rep(i,0,k) rep(j,0,n) dp[i][j]=(ll)oo*1000000;
    dp[0][0]=0;
    rep(i,1,k) solve(i,1,n,0,n-1);
    printf("%I64d\n",dp[k][n]);

    return 0;
} 

