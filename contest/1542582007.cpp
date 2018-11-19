#include <bits/stdc++.h>
#define LL __int64

using namespace std;

int n,k,sum[20],a[10],b[20];

int main()
{
//    freopen("c.in","r",stdin);
    for ( ; scanf("%d%d",&n,&k)!=EOF; )
    {
        for (int i=0; i<16; i++) sum[i]=0;
        for (int i=1; i<=n; i++)
        {
            int t=0,x;
            for (int j=0; j<k; j++) scanf("%d",&x),t+=(1<<j)*x;
            sum[t]++;
        }
        if (sum[0]>0) {printf("YES\n");continue;}
        n=0;
        for (int i=0; i<16; i++) if (sum[i]>0) b[n++]=i;
        bool flag=false;
        for (int state=1; state<(1<<n); state++)
        {
//            printf("state=%d\n",state);
            bool ff=true;
            int tot=0;
            for (int i=0; i<k; i++) a[i]=0;
            for (int i=0; i<n; i++) if ((state>>i)&1)
            {
                for (int j=0; j<k; j++) if ((b[i]>>j)&1) a[j]++;
                tot++;
            }
            for (int i=0; i<k; i++) if (a[i]*2>tot) ff=false;
            if (ff && tot>0) flag=true;
        }
        printf(flag?"YES\n":"NO\n");
    }
    return 0;
}
