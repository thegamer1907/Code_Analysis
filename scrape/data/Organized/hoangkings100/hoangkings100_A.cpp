#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("TEST.INP","r",stdin);
    freopen("TEST.OUT","w",stdout);*/
    long long n,m,k,a[100010],ans=0;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++) cin>>a[i];
    for(int i=1;i<=m;)
    {
        i=upper_bound(a+i,a+m+1,((a[i]-i)/k+1)*k+i-1)-a;
        ans++;
    }
    cout<<ans;
}