#include<bits/stdc++.h>
#define ll long long int
#define pii pair < int , pair < int , int > >
#define pll pair < ll , pair < ll , ll > >
#define pi pair < int , int >
#define pp pair < ll , ll >
#define inf 1e18
#define mod 1000000007
#define pb push_back
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sl1(a) scanf("%lld",&a)
#define sl2(a,b) scanf("%lld%lld",&a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define popcount(a) __builtin_popcount(a)
#define PI 3.14159265
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int i,j,k;
    int arr[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>arr[i][j];
    }
    int mat[n+1][m+1];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1)
                mat[j][i]=1;
            else
            {
                if(arr[j][i]>=arr[j-1][i])
                    mat[j][i]=mat[j-1][i]+1;
                else
                    mat[j][i]=1;
            }
        }
    }
    int mx[n+1];
    for(i=1;i<=n;i++)
    {
        int mx1=1;
        for(j=1;j<=m;j++)
            mx1=max(mx1,mat[i][j]);
        mx[i]=mx1;
    }
    cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        int cnt=mx[r];
        if(cnt>=(r-l+1))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
