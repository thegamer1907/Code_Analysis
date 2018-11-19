#include <bits/stdc++.h>

using namespace std;

bool vis[120];
int main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    memset(vis, false, sizeof(vis));
    vis[h % 12 * 10 + 1] = true;
    vis[m % 60 * 2 + 1] = true;
    vis[s % 60 * 2] = true;
    bool flag = false;
    if(t1 == t2)
    {
        printf("YES\n");
        return 0;
    }
    if(t1 > t2)
        swap(t1, t2);
    t1 = t1 % 12 * 10;
    t2 = t2 % 12 * 10;
    int temp = (t1 + 1) % 120;
    while(1)
    {
        if(temp == t2)
        {
            flag = true;
            break;
        }
        if(vis[temp])
        {
            break;
        }
        temp = (temp + 1) % 120;
    }
    temp = (t1 - 1 + 120) % 120;
    while(1)
    {
        if(temp == t2)
        {
            flag = true;
            break;
        }
        if(vis[temp])
        {
            break;
        }
        temp = (temp - 1 + 120) % 120;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
