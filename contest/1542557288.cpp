#include <bits/stdc++.h>

using namespace std;

bool vis[300];
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    memset(vis, false, sizeof(vis));
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        for(int j = 0; j < k; j++)
        {
            int x;
            scanf("%d", &x);
            temp += (x << j);
        }
        //cout << temp << endl;
        for(int j = 0; j < 1 << k; j++)
        {
            if(vis[j] && ((temp & j) == 0))
            {
                flag = true;
                break;
            }
        }
        vis[temp] = true;
    }
    if(n == 1)
    {
        if(vis[0])
            printf("YES\n");
        else
            printf("NO\n");
        return 0;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
