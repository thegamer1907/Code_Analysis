
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
#include<map>
#include<vector>
#include<deque>
#include<algorithm>
#define ll long long
#define INF 1008611111
#define M (t[k].l+t[k].r)/2
#define lson k*2
#define rson k*2+1
using namespace std;
int main()
{
    int i,j,n,tag=0;
    char s[10],a[105][10];
    int vis[10];
    memset(vis,0,sizeof(vis));
    scanf("%s%d",s,&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        if(a[i][0]==s[0]&&a[i][1]==s[1]||a[i][0]==s[1]&&a[i][1]==s[0])
            tag=1;
        if(s[0]==a[i][0])
            vis[0]=1;
        if(s[1]==a[i][1])
            vis[1]=1;
        if(s[0]==a[i][1])
            vis[2]=1;
        if(s[1]==a[i][0])
            vis[3]=1;
    }
    if(vis[2]&&vis[3])
        tag=1;
    if(tag)
    {
        printf("YES\n");
        return 0;
    }
    else
        printf("NO\n");
    return 0;
}