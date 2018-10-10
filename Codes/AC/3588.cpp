#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <cmath>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inff = 0x3f3f3f3f3f3f3f3f;
#define FOR(i,a,b) for(int i(a);i<=(b);++i)
#define FOL(i,a,b) for(int i(a);i>=(b);--i)
#define REW(a,b) memset(a,b,sizeof(a))
#define inf int(0x3f3f3f3f)
#define si(a) scanf("%d",&a)
#define sl(a) scanf("%I64d",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define mod int(1e9+7)
#define pb push_back
#define lc (d<<1)
#define Pll pair<ll,ll>
#define P pair<int,int>
#define pi acos(-1)
ll n,m,k,x,s,b[200008],d[200008],c[200008];
struct as{
ll x,y;}a[200008];
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k>>x>>s;
    FOR(i,1,m)  sl(a[i].x);
    FOR(i,1,m)  sl(a[i].y);
    FOR(i,1,k)  sl(b[i]);
    FOR(i,1,k)  sl(d[i]);
    ll z,ans=n*x;
    FOR(i,1,k)
    {
        if(d[i]<=s)  ans=min(ans,(n-b[i])*x);
    }
    FOR(i,1,m)
    {
        if(a[i].y<=s) ans=min(ans,n*a[i].x);
        else  continue;
        z=upper_bound(d+1,d+k+1,s-a[i].y)-d;
        if(d[z-1]+a[i].y<=s)
        {
            c[i]=(n-b[z-1])*a[i].x;
        }
        else continue;
        ans=min(ans,c[i]);
    }
    cout<<ans<<endl;
    return 0;
}
