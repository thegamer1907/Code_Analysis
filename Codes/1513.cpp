#include<bits/stdc++.h>
using namespace std;
long long n,s,x,y,ans=0;
long long a[100005],b[100005];
long long getSum(long long k)
{
    for(int i=1;i<=n;i++)
        b[i]=a[i]+i*k;
    sort(b+1,b+n+1);
    long long sum=0;
    for(int i=1;i<=n&&i<=k;i++)
    {
        sum+=b[i];
        if(sum>s)
        {
            sum=-1;
            break;
        }
    }
    return sum;
}
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long l=1,r=n;
    while(l<=r)
    {
        x=getSum((l+r)/2);
        if(x!=-1)
            ans=x,y=(l+r)/2,l=(l+r)/2+1;
        else
            r=(l+r)/2-1;
    }
    cout<<y<<" "<<ans<<endl;
    return 0;
}
