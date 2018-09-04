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
#include <ctime>

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
//#define lb puts("")
#define lson ((rt<<1)+1)
#define rson ((rt<<1)+2)
#define mid ((l+r)/2)
#define lmid (l+(r-l)/3)
#define rmid (r-(r-l)/3)
#define debug cout<<"???"<<endl
#define pll pair<long long, long long>

const double PI = 3.1415926535897932384626433;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f3f;
const double eps = 1e-12;
template<class T> T gcd(T a, T b){if(!b)return a;return gcd(b,a%b);}

const int maxn = 2e5+10;

map<int, ll> mp, tb;
int dp[maxn], a[maxn], n, k;

int main()
{
    //frein;
    //freout;
    sc(n); sc(k);
    mp.clear();
    tb.clear();
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++){
        sc(a[i]);
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%k == 0){
            int nxt = a[i]/k;
            if(tb.find(nxt) != tb.end()){
                ans += tb[nxt];
            }
            if(mp.find(nxt) != mp.end()){
                tb[a[i]] += mp[nxt];
            }
        }
        mp[a[i]]++;
    }
    cout << ans << endl;
    return 0;
}
