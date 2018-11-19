
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
#define pd(x) printf("%d\n",x)
#define cls(a,x) memset(a,x,sizeof(a))
const double eps=1e-8;
const double PI=acos(-1.0);
const int INF=1e9+10;
const int MOD=1e9+7;
const int N=1e6+10;
int vis[30],v[5];
//char s[N];
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(vis,0,sizeof(vis));
        for(int i=1; i<=n; i++)
        {
            int x,sum=0;
            for(int j=k-1; j>=0; j--)
            {
                scanf("%d",&x);
                if(x) sum+=(1<<j);
            }
            vis[sum]=1;
        }
        int flag=0;
        if(vis[0]) flag=1;
        for(int i=1; i<16&&!flag; i++)
            for(int j=1; j<16&&!flag; j++)
                if(i!=j&&vis[i]&&vis[j])
                {
                    memset(v,0,sizeof(v));
                    int x1=i,x2=j,kk=0;
                    while(x1)
                    {
                        v[kk++]+=x1&1;
                        x1/=2;
                    }
                    kk=0;
                    while(x2)
                    {
                        v[kk++]+=x2&1;
                        x2/=2;
                    }
                    if(v[0]<2&&v[1]<2&&v[2]<2&&v[3]<2)
                    {
//                        printf("%d %d\n",i,j);
                        flag=1;
                    }
                }
        if(flag) puts("YES");
        else puts("NO");
    }
    return 0;
}
