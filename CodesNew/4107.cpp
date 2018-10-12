#include "iostream"
#include "iomanip"
#include "string.h"
#include "stack"
#include "queue"
#include "string"
#include "vector"
#include "set"
#include "map"
#include "algorithm"
#include "stdio.h"
#include "math.h"
#pragma comment(linker, "/STACK:102400000,102400000")
#define bug(x) cout<<x<<" "<<"UUUUU"<<endl;
#define mem(a,x) memset(a,x,sizeof(a))
#define step(x) fixed<< setprecision(x)<<
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define ll long long
#define endl ("\n")
#define ft first
#define sd second
#define lrt (rt<<1)
#define rrt (rt<<1|1)
using namespace std;
const ll mod=1e9+7;
const ll INF = 1e18+1LL;
const int inf = 1e9+1e8;
const double PI=acos(-1.0);
const int N=1e5+100;

int n, q;
ll a[N*2], k[N*2], sum[N*2];
int main() {
    scanf("%d %d", &n, &q);
    for(int i=1; i<=n; ++i) {
        scanf("%lld", &a[i]);
        sum[i] = sum[i-1]+a[i];
    }
    for(int i=1; i<=q; ++i) {
        scanf("%lld", &k[i]);
    }
    ll now = 0;
    for(int i=1; i<=q; ++i) {
        now += k[i];
        int l = 1, r = n, ans = -1;
        while(l<=r) {
            int mid = l+r>>1;
            if(sum[mid] > now) {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        if(ans == -1) {
            printf("%d\n", n);
            now = 0;
        }
        else printf("%d\n", n-ans+1);
    }
    return 0;
}