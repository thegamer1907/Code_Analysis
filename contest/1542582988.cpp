#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int h, m, s, t1, t2;
int tmp = 43200;
int vis [500000];
int main ()
{
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    t1 %= 12;
    t2 %= 12;
    h %= 12;
    t1 *= 3600;
    t2 *= 3600;
    h = h * 3600 + m * 60 + s;
    m = m * tmp / 60 + s;
    s = s * tmp / 60;
    bool fg1 = true, fg2 = true;
    //printf("%d %d %d %d %d\n", h, m, s, t1, t2);
    vis[h] = vis[m] = vis[s] = 1;
    if(t1 > t2)
    {
        for(int i = t2; i <= t1; i++)
            if(vis[i]) fg1 = false;
        for(int i = 0; i <= t2; i++)
            if(vis[i]) fg2 = false;
        for(int i = t1; i <= tmp - 1; i++)
            if(vis[i]) fg2 = false;
    }
    else
    {
        for(int i = t1; i <= t2; i++)
            if(vis[i]) fg1 = false;
        for(int i = 0; i <= t1; i++)
            if(vis[i]) fg2 = false;
        for(int i = t2; i <= tmp - 1; i++)
            if(vis[i]) fg2 = false;
    }
    if(fg1 || fg2) printf("YES\n");
    else
        printf("NO\n");
}
