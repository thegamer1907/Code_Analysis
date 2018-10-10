#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;
const int MAXN = 1e5+100;
typedef long long LL;
LL a[MAXN],b[MAXN],s,tot;
int n;

bool judge(int mid)
{
    tot=0;
    for (int i=1;i<=n;i++) b[i]=a[i]+1ll*i*mid;
    sort(b+1,b+n+1);
    for (int i=1;i<=mid;i++)
    {
        tot+=b[i];
        if (tot > s) return false;
    }
    return true;
}

int main()
{
    cin>>n>>s;
    for (int i=1;i<=n;i++) cin>>a[i];
    int l=0,r=n,ans=0;
    LL mon=0;
    while (l<=r)
    {
        int mid=(l+r)>>1;
        if (judge(mid))
        {
            if (mid > ans)
            {
                ans=mid;
                mon=tot;
            }
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans<<" "<<mon;
    return 0;
}
