#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define dd(x) cout << #x << " = " << x << ", "
#define de(x) cout << #x << " = " << x << endl
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define per(i,a,b) for(int i=(b)-1;i>=(a);--i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define y1 y10086
//INF = 1 061 109 567 ; INF + INF = 2 122 219 134 ;
//LINF = 4 557 430 888 798 830 399 ; LINF + LINF = 9 114 861 777 597 660 798 ;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = (int)1e9+7;
const int N = (int)1e5+7;

// func
char read_char() {char c;for(;;){c=getchar();if(isdigit(c) || isalpha(c))return c;}}
ll powmod(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll add(ll a, ll b) { a = ((a + b) % MOD + MOD) % MOD; return a; }
ll mul(ll a, ll b) { return a * b % MOD; }

//-------- var --------//

int n, a[N], dp[N][3];

//-------- func --------//

void Init() {

}

bool check(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}

int Solve() {
    int ans = 0;
    rep(i, 19, 20000000) {
        if (check(i)) {
            ans++;
            if (ans == n) return !printf("%d\n", i);
        }
    }
}

//--------main--------//

int main ()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    //int T; scanf("%d", &T);
    //while (T--) {
    while (~scanf("%d", &n)) {
        Init();
        Solve();
    }
    return 0;
}
