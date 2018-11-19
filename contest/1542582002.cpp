#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define rep(i,x,y) for (int i=x; i<=y; ++i)
#define repd(i,x,y) for (int i=x; i>=y; --i)
#define repe(i,x) for (edge *i=fst[x]; i; i=i->nxt)
#define debug(...) fprintf(stderr,__VA_ARGS__)

const int get()
{
    static char ch;
    while (!isdigit(ch=getchar()));
    static int ret;
    for (ret=ch-48; isdigit(ch=getchar()); ret=ret*10+ch-48);
    return ret;
}

using namespace std;
typedef long long ll;
int n,k,m,a[16],flag[16],cnt[4];

int main()
{
//    freopen("a.in","r",stdin);
//    freopen("a.out","w",stdout);
    n=get(),k=get();
    rep(i,1,n)
    {
        int x=0;
        rep(i,1,k)
            x=x<<1|get();
        if (!flag[x])
            a[m++]=x,flag[x]=1;
    }
    rep(i,1,(1<<m)-1)
    {
        memset(cnt,0,sizeof(cnt));
        int tot=0;
        rep(j,0,m-1)
            if ((i>>j)&1)
            {
                ++tot;
                rep(x,0,k-1)
                    cnt[x]+=(a[j]>>x)&1;
            }
        tot>>=1;
        bool ans=1;
        rep(i,0,k-1)
            if (cnt[i]>tot)
            {
                ans=0;
                break;
            }
        if (ans)
            return puts("YES"),0;
    }
    puts("NO");
    return 0;
}
