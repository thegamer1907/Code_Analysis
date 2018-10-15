#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=200000+10;
ll a[maxn],k[maxn],sum[maxn];
struct node
{
    int id,val;
};
vector<node>w;
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=1;i<=q;i++)
        scanf("%lld",&k[i]);
    int l=1,r=n;
    ll ans=0,flag=0;
    for(int i=1;i<=q;i++)
    {
        if(k[i]>=sum[n]-ans)
        {
            ans=0;
            l=1;
            r=n;
            flag=0;
            printf("%d\n",n);
            continue;
        }
        while(l<r)
        {
            int mid=(l+r)/2;
            if(sum[mid]-ans>=k[i])
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        ans+=k[i];r=n;
        flag=sum[l]-ans;
        //printf("L %d\n",l);
        printf("%d\n",flag==0?n-l:n-l+1);
        if(!flag) l++;


    }
    return 0;
}
/*
3 2
1 2 1
3 10
*/
