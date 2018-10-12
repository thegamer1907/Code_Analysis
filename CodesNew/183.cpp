#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
#define repp(x,n) for(__typeof(n) x=1;x<=(n);x++)
#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
#define sf(n)       scanf("%lld", &n)
#define sff(a,b)    scanf("%lld %lld", &a, &b)
#define pf(a)  printf("%lld\n",a)
#define pff(a,b)  printf("%lld %lld",a,b)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define READ freopen("double helix.txt","r",stdin)

int main()
{
    ll a[100001],cnt=0,ans=0,j=-1,n,t,sum=0;
     cin>>n>>t;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
        sum=sum+a[i];
        if(sum > t) sum-=a[++j];
        ans = max(ans,i-j);
    }

    cout<<ans<<'\n';
    return 0;
}
