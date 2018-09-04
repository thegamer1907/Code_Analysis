#include <cstdio>
#include <cstring>
#include <queue>
#include <cmath>
#include <algorithm>
#include <set>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
#define pi acos(-1.0)
#define eps 1e-6
#define fi first
#define se second
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define bug         printf("******\n")
#define mem(a,b)    memset(a,b,sizeof(a))
#define fuck(x)     cout<<"["<<x<<"]"<<endl
#define f(a)        a*a
#define sf(n)       scanf("%d", &n)
#define sff(a,b)    scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define pf          printf
#define FRE(i,a,b)  for(i = a; i <= b; i++)
#define FREE(i,a,b) for(i = a; i >= b; i--)
#define FRL(i,a,b)  for(i = a; i < b; i++)
#define FRLL(i,a,b) for(i = a; i > b; i--)
#define FIN freopen("DATA.txt","r",stdin)
#define lowbit(x)   x&-x
#pragma comment (linker,"/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
const int INF = 0x7ffffff;
const int maxn = 2e5 + 10;
LL n,a[maxn];
int main() {
    scanf("%lld",&n);
    LL sum=0;
    set<LL>st;
    for (int i=0 ;i<n ;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
        st.insert(sum);
    }
    LL temp=0,ans=0;
    for (int i=n-1 ;i>=0 ;i--) {
        st.erase(sum);
        sum-=a[i];
        temp+=a[i];
        if (st.count(temp)) ans=max(ans,temp);
    }
    printf("%lld\n",ans);
    return 0;
}
