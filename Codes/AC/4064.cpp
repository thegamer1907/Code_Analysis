#include <bits/stdc++.h>
using namespace std;
int n,m,A[100005],s[100005],CEV[100005];
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int x;
            scanf("%d",&x);
            if(x>=A[j])
            s[j]++;
            else s[j]=1;
            A[j]=x;
            CEV[i]=max(CEV[i],s[j]);
        }
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(CEV[b]>=b-a+1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
