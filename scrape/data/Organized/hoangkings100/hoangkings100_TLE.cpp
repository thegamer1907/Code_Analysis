#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,kk,a[100010],ans=0,v1,v2=0;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++) cin>>a[i];
    kk=k;
    while(1==1)
    {
        if(kk>n) kk=n;
        v1=upper_bound(a+1,a+m+1,kk)-a-1;
        if(v1==v2)
        {
            int s=(a[v1+1]-kk-1)/k;
            kk+=k*(s+1);
            continue;
        }
        ans++;
        kk+=v1-v2;
        v2=v1;
        if(v1==m) break;
    }
    cout<<ans;
}