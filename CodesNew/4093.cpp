#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum[200020];
int main()
{
    int n,q;
    ll val,a;
    while(~scanf("%d%d",&n,&q))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%I64d",&a);
            if(i==0)
                sum[i]=a;
            else
                sum[i]=sum[i-1]+a;
        }
//        for(int i=0;i<n;i++)
//            printf("%I64d ",sum[i]);
//            printf("\n");
        ll temp=0;
        for(int i=1;i<=q;i++)
        {
            scanf("%I64d",&val);
            temp+=val;
            int ind=upper_bound(sum,sum+n,temp)-sum;
            if(n-ind==0)
                printf("%d\n",n);
            else
            printf("%d\n",n-ind);
            if(temp>=sum[n-1])
                temp=0;
        }
    }
    return 0;
}
