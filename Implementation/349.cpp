#include<bits/stdc++.h>
using namespace std;
#define Fopen freopen("_in.txt","r",stdin); freopen("_out.txt","w",stdout);
#define LL long long
#define ULL unsigned LL
#define fi first
#define se second
#define pb push_back
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define lch(x) tr[x].son[0]
#define rch(x) tr[x].son[1]
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
typedef pair<int,int> pll;
const int inf = 0x3f3f3f3f;
const LL INF = 0x3f3f3f3f3f3f3f3f;
const LL mod =  (int)1e9+7;
const int N = 1e5 + 100;
int a[N];
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    int t = a[m], ans = 0;
    if(t == 0)  t = 1;
    for(int i = 1; i <= n; ++i) {
        ans += (a[i] >= t);
    }
    printf("%d\n", ans);
    return 0;
}
