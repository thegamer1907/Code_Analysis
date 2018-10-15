#include <cstdio>
using namespace std;
long long int ivar[200001];
int n,mort;
void bin (long long int val)
{
    mort=0;
    int st=1,dr=n,mij;
    while (st<=dr)
    {
        mij=(st+dr)/2;
        if (ivar[mij]<=val)
        {
            mort=mij;
            st=mij+1;
        }
        else
        {
            dr=mij-1;
        }
    }
}
int main()
{
    int q;
    scanf("%d %d",&n,&q);
    for (int i=1; i<=n; ++i)
    {
        scanf("%lld",&ivar[i]);
        ivar[i]+=ivar[i-1];
    }
    long long int damag=0;
    for (int i=1; i<=q; ++i)
    {
        long long int a;
        scanf("%lld",&a);
        damag=damag+a;
        bin(damag);
        if (mort<n)
        {
            printf("%d\n",n-mort);
        }
        else
        {
            printf("%d\n",n);
            damag=0;
        }
    }
    return 0;
}
