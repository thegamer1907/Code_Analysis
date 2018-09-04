#include <bits/stdc++.h>

using namespace std;
long long n,k,a[200005],res;
map<long long,long long>pre,suf;
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;++i)
        cin>>a[i];
    for(long long i=n;i>0;--i)
        suf[a[i]]++;
    for(long long i=1;i<=n;++i)
    {
        --suf[a[i]];
        if(a[i]%k==0)
        {
            long long tmp1=pre[a[i]/k];
            long long tmp2=pre[a[i]*k];
            res+=(pre[a[i]/k]*suf[a[i]*k]);
        }
        ++pre[a[i]];
    }
    cout<<res;
    return 0;
}
