#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<vector>
#include<map>
#include<functional>
    
#define fst first
#define sc second
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define lson l,mid,root<<1
#define rson mid+1,r,root<<1|1
#define lc root<<1
#define rc root<<1|1
#define lowbit(x) ((x)&(-x)) 

using namespace std;

typedef double db;
typedef long double ldb;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PI;
typedef pair<ll,ll> PLL;

const db eps = 1e-6;
const int mod = 1e9+7;
const int maxn = 8e5+100;
const int maxm = 2e6+100;
const int inf = 0x3f3f3f3f;
const db pi = acos(-1.0);

int a[maxn];
int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i = 1 ; i<= n; i++){
        scanf("%d", &a[i]);
    }
    k = a[k];
    int ans = 0;
    for(int i = 1 ; i <= n; i++){
        if(a[i] >= k && a[i])ans++;
        else break;
    }
    printf("%d\n",ans);
    return 0;
}