#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define INF 0x3f3f3f3f
#define inc(i,j,k) for(int i=j;i<=k;i++)
#define dec(i,j,k) for(int i=j;i>=k;i--)
const int N=1e5+5;

LL n,m,k,a[N];

int main()
{
    while(~scanf("%lld%lld%lld",&n,&m,&k)) {
        inc(i,1,m) scanf("%lld",&a[i]);
        LL K=k, id=1;
        LL ans=0, out=0;
        while(id<=m) {
            //printf("aid=%lld out=%lld\n",a[id],out);
            LL num=0LL;
            if(a[id]-out>K) {
                LL lev=a[id]-out-K;
                LL cnt=lev/k;
                if(lev%k) cnt++;
                K+=cnt*k;
            }
            while(id<=m && a[id]-out<=K) {
                id++; num++;
            }
            out+=num; ans++;
        }
        printf("%lld\n",ans);
    }

    return 0;
}