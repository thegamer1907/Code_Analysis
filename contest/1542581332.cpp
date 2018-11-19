#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
char s[5];
int vis[5], n;
int main ()
{

    scanf("%s", s + 1);
    int a = s[1] - 'a';
    int b = s[2] - 'a';
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%s", s + 1);
        int tmp1 = s[1] - 'a';
        if(tmp1 == b) vis[1] = 1;
        int tmp2 = s[2] - 'a';
        if(tmp2 == a) vis[2] = 1;
        if(a==tmp1&&b==tmp2) vis[1] = vis[2] =1;
    }
    if(vis[1] && vis[2])
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
