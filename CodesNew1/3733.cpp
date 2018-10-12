#include<bits/stdc++.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int k=0,x,sx=0,max = -1;
        while(k++<n)
        {
            scanf("%d",&x);
            sx += x;
            if(x>max) max = x;
        }
        int mm = (sx+m)/n;
        if((sx+m)%n) mm++;
        if(max>mm) mm = max;
        printf("%d %d\n",mm,max+m);
    }
    return 0;
}
