#include<algorithm>
#include<iostream>
#include<string.h>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
queue<int>q;
const int maxn = 2e5+500;
int vis[maxn];
int vis1[maxn];
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    long long n,m,a[10000],cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]>=a[m]&&a[i]>0)
        cnt++;
    cout<<cnt<<endl;
        return 0;
}
