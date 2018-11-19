#include <bits/stdc++.h>
using namespace std;
int n,k;
bool cov[16];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int s=0,v=1;
        for(int i=1;i<=k;i++)
        {
            int tmp;
            scanf("%d",&tmp);
            s+=tmp*v;
            v*=2;
        }
        cov[s]=true;
    }
    for(int i=0;i<1<<k;i++)
        for(int j=0;j<1<<k;j++)
            if(cov[i] && cov[j] && (i&j)==0)
            {
                printf("YES\n");
                return 0;
            }
    printf("NO\n");
}