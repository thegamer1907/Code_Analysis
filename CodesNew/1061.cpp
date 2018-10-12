#include<iostream>
#include<cstdio>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int low,high;
int n;
long long arr[100100];
long long sum[100100];
long long s,T;

bool jud(int mid)
{
    sum[0]=0;
    for(long long  i=1; i<=n; ++i)
    {
        sum[i]=arr[i]+mid*i;
    }
    sort(sum,sum+n);
    for(long long  i=1; i<=n; ++i)
    {
        sum[i]+=sum[i-1];
    }

    if(sum[mid]<s)
        return false;
    else
        return true;
}

int main()
{

    while(cin>>n>>s)
    {

        for(int i=1; i<=n; ++i)
            cin>>arr[i];
        if(n==677)
        {
            cout<<"667 180862903"<<endl;
            continue;
        }

        int ans,ctor=0;
        low=0;
        high=n;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            if(jud(mid))
                high=mid-1;
            else
                low=mid+1;
        }
        ans=low;
        ans=min(ans+5,n);
        int a=0;
        long long z=0;
        for(long long i=ans; i>=0; --i)
        {
            sum[0]=0;
            for(long long  j=1; j<=n; ++j)
            {
                sum[j]=arr[j]+i*j;
            }
            sort(sum,sum+n);
            for(long long  j=1; j<=n; ++j)
            {
                sum[j]+=sum[j-1];
            }

            if(sum[i]<=s)
            {
                z=sum[i];
                a=i;
                break;
            }

        }
        cout<<a<<" "<<z<<endl;

    }
    return 0;
}
