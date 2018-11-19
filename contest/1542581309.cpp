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
#define sc(x) scanf("%d", &x)
#define pr(x) printf("x:%d\n", x)
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define frein freopen("in.txt", "r", stdin)
#define freout freopen("out.txt", "w", stdout)
#define freout1 freopen("out1.txt", "w", stdout)
#define lb puts("")
#define PI M_PI
#define lson ((rt<<1)+1)
#define rson ((rt<<1)+2)
#define mid ((l+r)/2)
#define lmid (l+(r-l)/3)
#define rmid (r-(r-l)/3)
#define debug cout<<"???"<<endl

const double PI = 3.1415926535897932384626433;
const ll mod = 1000000007;
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
template<class T> T gcd(T a, T b){if(!b)return a;return gcd(b,a%b);}
const int maxn = 1e5+100;

int tb[100];
int n,k,dig[4];

int dfs(int l, int res)
{
    if(l == k){
        //printf("tb[%d]:%d\n",res,tb[res]);
        return tb[res];
    }
    if(dfs(l+1, res*2)) return 1;
    if(dig[l] == 0){
        if(dfs(l+1, res*2+1)) return 1;
    }
    return 0;
}
int solve()
{
    for(int i = (1<<k)-1; i >= 0; i--){
        if(tb[i] == 0) continue;
        //printf("i:%d\n",i);
        int tmp = i;
        for(int j = 0; j < k; j++){
            dig[k-j-1] = tmp%2;
            tmp /= 2;
        }
        /*for(int j = 0; j < k; j++){
            printf("%d ", dig[j]);
        }lb;*/
        if(dfs(0,0)) return 1;
    }
    return 0;
}
int main()
{
    //frein;
    //freout;
    sc(n); sc(k);
    memset(tb, 0, sizeof(tb));
    for(int i = 0; i < n; i++){
        int res = 0, tmp;
        for(int j = 0; j < k; j++){
            sc(tmp);
            res <<= 1;
            res += tmp;
        }
        tb[res]++;
    }
    if(solve()) printf("YES\n");
    else printf("NO\n");
    return 0;
}
