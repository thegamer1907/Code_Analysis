#include<iostream>
#include<cstring>

int main()
{
    int n, m, a[100001], diff[100001], cnt=0;
    bool vis[100001];
    memset(vis, 0, sizeof(vis));
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]);
    for(int i=n;i;i--)
    {
        if(vis[a[i]] == false)
        {
            vis[a[i]] = true;
            cnt++;
        }
        diff[i] = cnt;
    }
    for(int i=0, l;i<m;i++)
    {
        scanf("%d", &l);
        printf("%d\n", diff[l]);
    }
}
