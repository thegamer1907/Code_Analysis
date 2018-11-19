#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vv[20];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<k; j++)
        {
            int x;
            scanf("%d",&x);
            sum=sum*2+x;
        }
        vv[sum]++;
    }
    if(vv[0])
    {
        puts("YES");
        return 0;
    }
    for(int i=0; i<(1<<4); i++)
        if(vv[i])
        {
            for(int j=0; j<(1<<4); j++)
                if(vv[j])
                {
                    if(!(i&j))
                    {
                        puts("YES");
                        return 0;
                    }
                }
        }
    puts("NO");
}
