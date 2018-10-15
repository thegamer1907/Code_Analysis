#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;int r;
    int a[10101];
    cin>>n>>m;
    int ans=0;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        ans+=a[i];
        sum=max(sum,a[i]);
    }
    int t=sum;
    sum+=m;
    ans+=m;
    int l=ans%n;
    ans=ans/n;
    if(l)
        ans+=1;
ans=max(ans,t);
    printf("%d %d\n",ans,sum);
    return 0;
}