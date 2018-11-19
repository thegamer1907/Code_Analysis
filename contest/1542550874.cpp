#include <bits/stdc++.h>
#define N 100005
#define INF 1000000000000
using namespace std;
typedef long long ll;
int n,k;
ll a[N],f[N],dp[N][21],calc;
int L=1,R;
inline void change(ll l,ll r)
{
    while(l<L)
        calc+=f[a[--L]]++;
    while(L<l)
        calc-=--f[a[L++]];
    while(R<r)
        calc+=f[a[++R]]++;
    while(r<R)
        calc-=--f[a[R--]];
}
void ans(int c_k,int l,int r,int s,int e)
{
    if(l>r||s>e)
        return;
    int m=(l+r)/2,curr=m;
    for(int i=s;i<=min(e,m);i++){
        change(i,m);
        if(dp[m][c_k]>dp[i-1][c_k-1]+calc){
            dp[m][c_k]=dp[i-1][c_k-1]+calc;
            curr=i;
        }
    }
    ans(c_k,l,m-1,s,curr);
    ans(c_k,m+1,r,curr,e);
}
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<=n;i++)
        for(int j=0;j<=k;j++)
            dp[i][j]=INF;
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(int i=0;i<k;i++)
        ans(i+1,1,n,1,n);
    printf("%lld",dp[n][k]);
    return 0;
}
