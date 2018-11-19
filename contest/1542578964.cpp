#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 1e5 + 15;
bitset<maxn> P[5], tmp, Std;
int N, k;
int main ()
{
    scanf("%d %d", &N, &k);
    for(int i = 1; i <= k; i++) P[i].reset();
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            int t;
            scanf("%d", &t);
            if(t) P[j].set(i);
        }
    }
    Std.set(0);
    for(int i = N + 1; i < maxn; i++) Std.set(i);
    tmp.reset();
    for(int i = 1; i <= k; i++)
        tmp |= P[i];
    tmp |= Std;
    if(!tmp.all())
    {
        printf("YES\n");
        return 0;
    }
    bool fg = false;
    for(int i = 1; i <= N && !fg; i++)
    {
        tmp.reset();
        for(int j = 1; j <= k; j++)
            if(P[j].test(i)) tmp |= P[j];
        tmp |= Std;
        if(!tmp.all()) fg = true;
    }
    if(fg)
        printf("YES\n");
    else
        printf("NO\n");
}
