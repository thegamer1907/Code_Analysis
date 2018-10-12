#include<bits/stdc++.h>
using namespace std;
#define pri pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define lp(i,u) for(int i=0;i<u;i++)
#define Lp(i) for(int i=0;i<n;i++)
#define ll long long
#define inf 1000000000000000001
#define eps 0.00000000001
#define scni(a) scanf("%d",&a)
#define scnl(a) scanf("%I64d",&a)
#define pri(a) printf("%d ",a)
#define prl(a) printf("%I64d ",a)
#define setval(a,p) memset(a,-1,sizeof(a))
#define ld long double
#define OO 1000005500
#define M 1001000
#define N 5020
#define mod 1000000007
ll n,m,a[N],maxi,sum,ans,tmpm;



int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        maxi=max(maxi,a[i]);

    }
    tmpm=m-(n*maxi-sum);
    if(tmpm<0)
    {
        cout<<maxi<<" "<<maxi+m;
        return 0;
    }
    tmpm=(tmpm+n-1ll)/n;
    ans=tmpm+maxi;


    cout<<ans<<" "<<m+maxi;







    return 0;
}
