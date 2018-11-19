#include<bits/stdc++.h>
using namespace std;
int g[100],f[100],n,k,a,c,u;
int main()
{
    scanf("%d%d",&n,&k);
    f[1]=1;f[2]=2;f[3]=4;f[4]=8;
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&a);
            c+=a*f[j];
        }
        g[c]++;
    }
    u=0;
    for(int i=0;i<16;i++)
        for(int j=0;j<16;j++)
        if(g[i]!=0&&g[j]!=0&&(i&j)==0)
        {
            u=1;break;
        }
    if(u==1) cout<<"YES";
    else cout<<"NO";
}
