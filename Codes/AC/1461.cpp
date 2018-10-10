#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
long long n,k;
pii a[100007];
long long b[100007];
long long solve(long long m)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i].first+(a[i].second+1)*(m+1);
    }
    sort(b,b+n);
    long long sum=0;
    for(int i=0;i<=m;i++)
        sum+=b[i];
    return sum;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i].first,a[i].second=i;
    long long l=0,r=n-1,sum1=0,m1=-1;
    while(l<=r)
    {
        long long m=(l+r)/2;
        long long sum=solve(m);
        if(sum<=k)
        {
            l=m+1;
            sum1=sum;
            m1=m;
        }
        else r=m-1;
    }
    cout<<m1+1<<' '<<sum1<<endl;
    return 0;
}
