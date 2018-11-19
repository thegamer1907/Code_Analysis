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
int vis[125];
int main()
{
    int t1,t2,h,m,s,tag=1,st,ed,i;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    memset(vis,0,sizeof(vis));
    if(h==12)
        h=0;
    if(m==0&&s==0)
        vis[h*10]=1;
    else
        vis[h*10+5]=1;
    if(s==0)
        vis[m*2]=1;
    else
        vis[m*2+1]=1;
    vis[s*2]=1;
    if(t1>t2)
        swap(t1,t2);
    st=t1*10;
    ed=t2*10;
    for(i=st;i<=ed;i++)
    {
        if(vis[i])
        {
            tag=0;
            break;
        }
    }
    if(tag)
    {
        printf("YES\n");
        return 0;
    }
    int flag=1;
    for(i=ed;i<=120;i++)
    {
        if(vis[i])
        {
            flag=0;
            break;
        }
    }
    for(i=0;i<=st;i++)
    {
        if(vis[i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
