#include <bits/stdc++.h>
using namespace std;

int use[30];
int main ()
{
    int n,k,max1=0;
    scanf("%d %d",&n,&k);
    for (int i=1;i<=n;i++)
    {
        int cnt=0,tmp=1,x;
        for (int j=1;j<=k;j++)
        {
            scanf ("%d",&x);
            cnt+=x*tmp;
            tmp*=2;
        }
        max1=max(max1,tmp);
        use[cnt]=1;
    }
    if(use[0])
    {
        printf ("YES\n");
        return 0;
    }
    int flag=0;
    for (int i=1;i<=max1;i++)
    {
        if(use[i]==0) continue;
        for (int j=1;j<=max1;j++)
        {
            if(use[j]==0) continue;
            if((i&j)==0) flag=1;
        }
    }
    if(flag) printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
