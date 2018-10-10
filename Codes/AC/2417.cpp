#include <bits/stdc++.h>
#define limit 10000005
using namespace std;
int n,mp[limit],A[limit],p[limit],m,l,r,t;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        //int t;
        scanf("%d",&t);
        mp[t]++;
    }
    for(int i=2;i<limit;i++)
    {
        A[i]=A[i-1];
        if(p[i]) continue;
        A[i]+=mp[i];
        for(int j=2*i;j<limit;j+=i)
        {
            p[j]=1;
            A[i]+=mp[j];
        }
    }
    scanf("%d",&m);
    while(m--)
    {
        //int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",A[min(limit-1,r)]-A[min(l-1,limit-1)]);
    }
    return 0;
}
