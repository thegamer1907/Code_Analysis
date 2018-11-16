#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<set>
#include<ctime>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#define eps 1e-6
#define inf 1000000000
#define pa pair<int,int>
#define ll long long 
using namespace std;
ll read()
{
    ll x=0;char ch=getchar();
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x;
}
int n,t;
int a[30005];
bool mark[30005];
int main()
{
    n=read();t=read();
    for(int i=1;i<n;i++)a[i]=read();
    mark[1]=1;
    for(int i=1;i<n;i++)
        if(!mark[i])continue;
        else mark[i+a[i]]=1;
    if(mark[t])puts("YES");
    else puts("NO");
    return 0;
}