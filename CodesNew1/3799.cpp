#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,mn=1e9+1,mx=-1,x,co=0,ans=0;
    scanf("%I64d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%I64d",&x);
        arr[i]=x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
        co+=mx-arr[i];
    if (mn<co-(mx-mn))
        printf("%I64d\n",mx);
    else
    {
        ans=co;
        mx-=co;
        ans+=(mx/(n-1))*n;
        mx%=n-1;
        if (mx)
        ans+=(mx+1);
        printf("%I64d\n",ans);
    }
    return 0;
}
