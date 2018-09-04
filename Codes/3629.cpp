#include <bits/stdc++.h>
#define limit 200005
#define mid (bas+son)/2
#define inf 9000000000000000000
#define lo long long
using namespace std;
lo int n,m,k,x,s,A[limit],B[limit],C[limit],D[limit],mn=inf;
lo int bs(lo int el)
{
    lo int bas=1,son=k;
    while(bas<=son)
    {
        if(el>=D[mid]) bas=mid+1;
        else son=mid-1;
    }
    return son;
}
lo mxx(lo a,lo b)
{
    if(a>=b) return a;
    return b;
}
lo mnn(lo a,lo b)
{
    if(a<=b) return a;
    return b;
}
void read()
{
    scanf("%lld %lld %lld",&n,&m,&k);
    scanf("%lld %lld",&x,&s);
    for(int i=1;i<=m;i++)
    scanf("%lld",&A[i]);
    for(int i=1;i<=m;i++)
    scanf("%lld",&B[i]);
    for(int i=1;i<=k;i++)
    scanf("%lld",&C[i]);
    for(int i=1;i<=k;i++)
    scanf("%lld",&D[i]);
}
void solve()
{
    mn=mnn(mn,x*n);
    for(int i=1;i<=m;i++)
    {
        if(s>=B[i])
        {
            if(s-B[i]>=D[1])
            {
                lo int t=bs(s-B[i]);
                mn=mnn(mn,mxx(0,(n-C[t])*A[i]));
            }
            if(s>=D[1])
            {
                lo int t=bs(s);
                mn=mnn(mn,mxx(0,(n-C[t])*x));
            }
            mn=mnn(mn,n*A[i]);
        }
        else if(s>=D[1])
        {
            lo int t=bs(s);
            mn=mnn(mn,mxx(0,(n-C[t])*x));
        }
    }
    printf("%lld",mn);
}
int main()
{
    read();
    solve();
    return 0;
}
