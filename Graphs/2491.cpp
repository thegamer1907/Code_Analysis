#define _CRT_SBCURE_MO_DEPRECATE
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<map>
#include<queue>
#include<iomanip>
#include<stack>
#include<functional>
typedef long long ll;
using namespace std;
const int maxn = 1e18;
const int INF = 0x3f3f3f3f;
inline int read()
{
    int f=1,x=0;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
vector<int>v[10010];
int res=1;
int c[10010];
void dfs(int u,int f)
{
    for(int i=0;i<v[u].size();i++)
    {
        if(v[u][i]==f)
            continue;
        dfs(v[u][i],u);
        if(c[v[u][i]]!=c[u])
            res++;
    }
}
int main()
{
    int n;
    n=read();
    int p;
    for(int i=2;i<=n;i++)
    {
        p=read();
        v[i].push_back(p);
        v[p].push_back(i);
    }
    for(int i=1;i<=n;i++)
        c[i]=read();
    dfs(1,-1);
    cout<<res<<endl;
}
