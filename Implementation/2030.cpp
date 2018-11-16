#include<bits/stdc++.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int x,y,z,sx=0,sy=0,sz=0;
        while(n--)
        {
            scanf("%d%d%d",&x,&y,&z);
            sx+=x;
            sy+=y;
            sz+=z;
        }
        if(!sx && !sy && !sz) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
