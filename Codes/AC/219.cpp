
#ifdef CF
    #pragma comment(linker, "/STACK:102400000,102400000")
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#endif
#include <bits/stdc++.h>
#define pii pair<ll, ll>
#define mod 1000000007
#define mp make_pair
#define pi acos(-1)
#define eps 0.00000001
#define mst(a,i) memset(a,i,sizeof(a))
#define all(n) n.begin(),n.end()
#define lson(x) ((x<<1))
#define rson(x) ((x<<1)|1)
#define inf 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int maxn = 1e5+5;
int a[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int i,j,k,m,n;
    cin>>n;
    for(int i=  1;i<=n;++i)cin>>a[i];
    for(int i = 1;i<=n;++i)a[i]+=a[i-1];
    cin>>m;
    for(int i=  1;i<=m;++i)
    {
        cin>>k;
        int ans = lower_bound(a+1,a+n+1,k)-a;
        cout<<ans<<endl;
    }
    return 0;
}

