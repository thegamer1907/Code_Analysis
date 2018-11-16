#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define N 105
#define INF 0x3f3f3f3f
using namespace std;
int n;
int a[N];
int ans;
void Solve()
{
    cin>>n;
    rep(i,0,n)
    {
        scanf("%d",&a[i]);
    }
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(i>j)continue;
            rep(k,i,j+1)
            {
                a[k]=1-a[k];
            }
            int tot=0;
            rep(k,0,n)
            {
                if(a[k]==1)tot++;
            }
            ans=max(ans,tot);
        //  printf("<%d,%d>[%d]",i,j,tot);
            rep(k,i,j+1)
            {
                a[k]=1-a[k];
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Solve();
    return 0;
}