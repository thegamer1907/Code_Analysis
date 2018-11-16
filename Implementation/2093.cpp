
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,X=0,Y=0,Z=0,x[110],y[110],z[110];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        X=X+x[i];
        Y=Y+y[i];
        Z=Z+z[i];
    }
    if(X==0 && Y==0 && Z==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
