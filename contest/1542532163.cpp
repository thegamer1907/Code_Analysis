#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
const int N=1e5+500;
typedef long long ll;

ll cl,cr,ans,c[N],f[30][N];
int a[N],n,k;

int gti(void)
{
    char c=getchar();
    int ret=0,st=1;
    for (;!isdigit(c)&&c!='-';c=getchar());
    if (c=='-') st=-1,c=getchar();
    for (;isdigit(c);c=getchar()) ret=ret*10+c-'0';
    return ret*st;
}

void solve(int k,int l,int r,int L,int R)
{
    if (l>r||L>R) return;
    int mid=(l+r)>>1,Mid=(L+R)>>1;
    for (int i=cr+1;i<=mid;i++) ans+=c[a[i]]++;
    for (int i=cl-1;i>=L;i--) ans+=c[a[i]]++;
    for (int i=cr;i>mid;i--) ans-=--c[a[i]];
    for (int i=cl;i<L;i++) ans-=--c[a[i]];
    cr=mid;
    for (int i=L;i<=min(mid,R);i++)
    {
        if (ans+f[k-1][i-1]<f[k][mid])
            f[k][mid]=ans+f[k-1][i-1],Mid=i;
        ans-=--c[a[i]],cl=i+1;
    }
    solve(k,l,mid-1,L,Mid),solve(k,mid+1,r,Mid,R);
}

int main(void)
{
    n=gti(),k=gti();
    for (int i=1;i<=n;i++) a[i]=gti();
    for (int i=1;i<=n;i++) f[1][i]=f[1][i-1]+c[a[i]]++;
    for (int i=2;i<=k;i++)
    {
        memset(c,0,sizeof(c));
        memset(f[i],31,sizeof(f[i]));
        cl=1,cr=0,ans=0;
        solve(i,i,n,i,n);
    }
    printf("%I64d\n",f[k][n]);
    return 0;
}
