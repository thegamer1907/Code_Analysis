
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
const int maxn=1e4+10;
int fa[maxn];
int k;
void Init()
{
    for(int i=0; i<=k; i++)
        fa[i]=i;
}
int Find(int x)
{
    if(x!=fa[x])
    {
        int t=fa[x];
        fa[x]=Find(fa[x]);
    }
    return fa[x];
}
void unsion(int x,int y)
{
    int xx=Find(x);
    int yy=Find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
    }
}
int main()
{
    scanf("%d",&k);
    int x,y;
    Init();
    for(int i=1; i<=k; i++)
    {
        scanf("%d",&x);
        unsion(x,i);
    }
    int cnt=0;
    for(int i=1; i<=k; i++)
    {
        if(Find(i)==i)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
