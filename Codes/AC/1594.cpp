#include <cstdio>
#include <algorithm>
#define MAXN 100005
#define LL long long
using namespace std;

LL n,S;
LL a[MAXN];

bool ok(LL x)
{
    ///putem cumpara x suveniruri
    LL b[MAXN];
    for (LL i=1; i<=n; i++)
        b[i]=a[i]+i*x;
    sort(b+1,b+n+1);
    LL pret=0;
    for (int i=1; i<=x; i++)
        pret+=b[i];
    return pret<=S;
}

LL cautare_binara()
{
    ///returneaza numarul maxim de suveniruri
    if (!ok(1))
        return 0;
    LL st=1,dr=n+1;
    while (dr-st>1)
    {
        LL mij=(st+dr)/2;
        if (ok(mij))
            st=mij;
        else
            dr=mij;
    }
    return st;
}

int main()
{
    scanf("%I64d %I64d",&n,&S);
    for (int i=1; i<=n; i++)
        scanf("%I64d",&a[i]);
    LL maxim=cautare_binara();

    LL b[MAXN];
    for (LL i=1; i<=n; i++)
        b[i]=a[i]+i*maxim;
    sort(b+1,b+n+1);
    LL pret=0;
    for (int i=1; i<=maxim; i++)
        pret+=b[i];

    printf("%I64d %I64d",maxim,pret);
    return 0;
}
