#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <set>
#define Inf 0x3f3f3f
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    int a[110];
    while(~scanf("%d",&n))
    {
        scanf("%d",&m);
        int maxn=-Inf;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            maxn=max(maxn,a[i]);
        }
        maxn+=m;
        int temp=m;
        for(int i=0;i<temp;i++)
        {
            sort(a,a+n);
            a[0]+=1;
            m--;
            if(m==0)
                break;
        }

        sort(a,a+n);
        printf("%d %d\n",a[n-1],maxn);
    }
    return 0;
}
