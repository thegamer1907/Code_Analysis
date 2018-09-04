#include<bits/stdc++.h>
#define debug(a) cout << #a << " " << a << endl
#define LL long long
#define ull unsigned long long
#define PI acos(-1.0)
#define eps 1e-6
const int N=2e5+7;
using namespace std;
LL a[N],b[N],c[N],d[N];
int main ()
{
    //yyy_3y
    //freopen("1.in","r",stdin);
    LL n ,m, k; scanf("%lld%lld%lld",&n,&m,&k);
    LL x,s; scanf("%lld%lld",&x,&s);
    for(int i=1;i<=m;i++)
        scanf("%lld",&a[i]);
    for(int i=1;i<=m;i++)
        scanf("%lld",&b[i]);
    for(int i=1;i<=k;i++)
        scanf("%lld",&c[i]);
    for(int i=1;i<=k;i++)
        scanf("%lld",&d[i]);
    LL ans=n*x;
    a[0]=x;
    for(int i=0;i<=m;i++){
        LL left=s-b[i];
        if(left<0) continue;
        LL l=0,r=k,pos=k;
        while(l<=r){
            int mid=(l+r)/2;
            if(d[mid]>left) r=mid-1;
            else pos=mid,l=mid+1;
        }
        ans=min(ans,(n-c[pos])*a[i]);
    }

    printf("%lld\n",ans);
    return 0;

}