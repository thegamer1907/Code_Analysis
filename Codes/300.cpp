#include<bits/stdc++.h>
using namespace std;

long long int bs(long long int *a, long long int lo, long long int hi, long long int k)
{
    long long int mid;
    while(lo<=hi)
    {
        mid= lo+(hi-lo)/2;
        if(a[mid]>k)
            hi=mid-1;
        else if(a[mid]<k)
            lo=mid+1;
        else
            return mid;
    }
    return lo;
}
int main()
{
    int n;
    cin>>n;
    long long int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",a+i);
        a[i]+=a[i-1];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long int k;
        scanf("%lld",&k);
        printf("%lld\n",bs(a,0,n,k));
    }
return 0;
}
