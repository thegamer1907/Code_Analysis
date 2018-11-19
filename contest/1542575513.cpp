#include <bits/stdc++.h>
using namespace std;

map<int,int> mp;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int res=0;
        for(int j=0;j<m;j++)
        {
            int d;
            scanf("%d",&d);
            res=res*2+d;
        }
        mp[res]++;
    }
    if(mp[0])
    {
        printf("YES\n");
        return 0;
    }
    for(int i=1;i<(1<<m);i++)
        for(int j=1;j<(1<<m);j++)
        {
            if(i&j) continue;
            if(mp[i]&&mp[j])
            {
                puts("YES");
                return 0;
            }
        }
    puts("NO");
    return 0;
}