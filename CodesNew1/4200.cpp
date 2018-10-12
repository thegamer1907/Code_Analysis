#include <iostream>
#include <cstdio>
#include <algorithm>
#define maxn round(1e6)
long long a[2000005],n,q,vt,k;
bool t;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    scanf("%lli%lli",&n,&q);
    for(int i=1;i<=n;i++)
    {
        scanf("%lli",&a[i]);
        a[i]=a[i-1]+a[i];
    }
    long long arrow=0;
    for(int i=1;i<=q;i++)
    {
        scanf("%lli",&k);
        arrow=arrow+k;
        int l=upper_bound(a+1,a+n+1,arrow)-a-1;
        if(l==n)
        {
            l=0;
            arrow=0;
        }
        cout<<n-l<<endl;
    }

    return 0;
}
