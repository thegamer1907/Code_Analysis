#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int maxn = 1e5+100;
const int mod = 1e9+7;
const int INF=0x3f3f3f3f;

int a[maxn];
int main()
{
    int n,i,j,k,x,y;
    scanf("%d",&n);
    x=mod;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=i-1)
        {
            x=min(x,i);
        }
        else
        {
            x=min(x,i+(a[i]-i+n)/n*n);
        }
        //printf("x=%d\n",x);
    }
    printf("%d\n",(x+n-1)%n+1);
    return 0;
}
