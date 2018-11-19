#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <queue>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
const int mod = 1000000007;

int n,k;

int a[100]={0},b[100]={0};

//bool dfs(int k,int i)
//{
//    if(i>=k) return 0;
//
//}

int main()
{
#ifdef local
    freopen("data","r",stdin);
#endif

    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int l=0;
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            if(x)l+=(1<<j);
        }
        a[l]=1;
    }
    if(a[0]) {puts("YES");return 0;}
    bool ok=0,hh;
        for(int i=1;i<(1<<k);i++)
        {
            if(a[i])
            for(int j=i+1;j<(1<<k);j++)
            {
                if(a[j])
                {
                    if((i&j)==0) ok=1;
                }
            }
        }
        if(ok) {puts("YES");return 0;}
//    while(1)
//    {
//        hh=0;
//        memset(b,0,sizeof b);
//        for(int i=1;i<(1<<k);i++)
//        {
//            if(a[i])
//            for(int j=i+1;j<(1<<k);j++)
//            {
//                if(a[j])
//                {
//                    if((i|j)!=j&&) =1,hh=1;
//                }
//            }
//        }
//        if(!hh) break;
//        swap(a,b);
//        for(int i=1;i<(1<<k);i++)
//        {
//            if(a[i])
//            for(int j=i+1;j<(1<<k);j++)
//            {
//                if(a[j])
//                {
//                    if((i&j)==0) ok=1;
//                }
//            }
//        }
//        if(ok) {puts("YES");return 0;}
//    }
    puts("NO");
}
