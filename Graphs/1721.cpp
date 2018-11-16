#include <bits/stdc++.h>

int f[100001];
int a[100001];

int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    f[1] = 1;
    for(int i = 1; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 1; i < n; i++)
    {
        if(f[i]) f[i+a[i]] = 1;
    }
    if(f[t])printf("YES");
    else printf("NO");
    return 0;
}
