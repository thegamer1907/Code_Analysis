#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int a[MAXN],ans;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    a[n+1]=2147483647;
    int cnt=1;
    for(int i=2;i<=n+1;++i)
    {
        if(a[i]>a[i-1]*2)
        {
            ans=max(ans,cnt);
            cnt=1;
        }
        else
        ++cnt;
    }
    cout<<ans<<endl;
    return 0;
}
