#include<bits/stdc++.h>
using namespace std;

const int maxn=(int)1e5+10;
int n,k,a[maxn],l,r,c[maxn];
long long s,f[maxn][25];

template <typename T> inline void Cin(T &x)
{
    char c;
    T sign = 1;
    x = 0;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())
        if (c == '-') sign = -1;
    for (; c >= '0' && c <= '9'; c = getchar())
        x = x * 10 + c - '0';
    x *= sign;
}

long long Get(int u,int v)
{
    if(u>=v)return 0;

    while(u<l)
    {
        --l;
        s+=c[a[l]];
        ++c[a[l]];
    }

    while(u>l)
    {
        --c[a[l]];
        s-=c[a[l]];
        ++l;
    }

    while(v<r)
    {
        --c[a[r]];
        s-=c[a[r]];
        --r;
    }

    while(v>r)
    {
        ++r;
        s+=c[a[r]];
        ++c[a[r]];
    }

    return s;
}

void F(int g,int l,int r,int optl,int optr)
{
    if(l>r)return;

    int mid=(l+r)/2;

    f[mid][g]=(long long)1e17;

    int optmid=-1;

    int limit=min(optr,mid);

    for(int i=optl;i<=limit;++i)
    {
        long long Cost=f[i-1][g-1]+Get(i,mid);

        if(f[mid][g]>Cost)
        {
            f[mid][g]=Cost;
            optmid=i;
        }
    }

    F(g,l,mid-1,optl,optmid);
    F(g,mid+1,r,optmid,optr);
}

int main()
{
    Cin(n);
    Cin(k);

    s=0;

    for(int i=1;i<=n;++i)
    {
        Cin(a[i]);
        s+=c[a[i]];
        f[i][1]=s;
        ++c[a[i]];
    }

    l=1;r=n;

    for(int i=2;i<=k;++i)F(i,1,n,1,n);

    cout<<f[n][k];
}
