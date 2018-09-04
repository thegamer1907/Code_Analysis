#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define LL long long

using namespace std;


int n,s;
int a[100010];
LL b[100010];

bool judge(int k)
{
    int i;
    for(i=1;i<=n;i++)
        b[i] = (LL)i*k + a[i];
    sort(b+1,b+1+n);
    LL sum = 0;
    for(i=1;i<=k;i++)
    {
        sum += b[i];
        if(sum > s)
            return false;
    }
    return true;

}
int binarysearch()
{
    int l = 0,r = n;
    int ans = l;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(judge(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }

    return ans;
}
int main(void)
{
    int i,j;
    while(scanf("%d%d",&n,&s)==2)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        int ans = binarysearch();
        for(i=1;i<=n;i++)
            b[i] = (LL)i*ans + a[i];
        sort(b+1,b+1+n);
        int sum = 0;
        for(i=1;i<=ans;i++)
            sum += b[i];
        printf("%d %d\n",ans,sum);
    }

    return 0;
}
