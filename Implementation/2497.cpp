#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100005],cnt,pos,ans;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
            cnt++;
    }
    ans=cnt*n+a[m];
    cout<<ans-1;
}
