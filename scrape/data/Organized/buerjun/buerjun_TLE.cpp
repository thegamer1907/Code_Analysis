#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<set>
#include<stack>
#include<vector>
#include<map>
#include<queue>
#define myself i,l,r
#define lson i<<1
#define rson i<<1|1
#define Lson i<<1,l,mid
#define Rson i<<1|1,mid+1,r
#define half (l+r)/2
#define lowbit(x) x&(-x)
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define min3(x,y,z) min(min(x,y),min(y,z))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define max3(x,y,z) max(max(x,y),max(y,z))
typedef long long ll;
const int inff=0x3f3f3f3f;
const double eqs=1e-9;
const double E=2.718281828459;
const double pi=acos(-1.0);
using namespace std;
const int maxn=2e5+5;
ll a[maxn];
 
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    set<ll> q;
    for (int i = 1; i <= m; i++) {
        scanf("%lld", &a[i]);
        q.insert(a[i]);
    }
    int ans = 0, sum = 0;
    while (!q.empty()) {
        auto it = q.begin();
        int s = 0,temp=0;
        if ((*it + k - 1 - sum) / k != temp) {
            temp=(*it + k - 1 - sum) / k;
            q.erase(it);
            ans++,s++;
            it = q.begin();
            while ((*it + k - 1 - sum) / k == temp) {
                q.erase(it);
                s++;
                it = q.begin();
            }
            sum+=s;
        }
    }
    printf("%d\n",ans);
    return 0;
}