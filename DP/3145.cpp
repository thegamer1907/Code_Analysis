#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define abs 1e-10

typedef long long ll;
typedef vector <int> vi;



int main()
{
    ios_base::sync_with_stdio(false);

    ll n,m;cin>>n>>m;

    int a[n][m],dp[n][m],sum[n][m];
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        for(int j=0;j<m;j++)
        {
            dp[i][j]=0;
            sum[i][j] = 0;
            char c = s[j];
            if(c == '.') a[i][j]=1;
            else a[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll cnt=0;
            if(i!=0){
                cnt+= a[i-1][j];
            }
            if(j!=0)cnt+=a[i][j-1];

            if(a[i][j]!=0)dp[i][j]=cnt;
        }
    }

    for(int i=0;i<n;i++)
    {
        sum[i][0] = dp[i][0];
        for(int j=1;j<m;j++)sum[i][j] = sum[i][j-1] + dp[i][j];

        if(i!=0)
        {
            for(int j=0;j<m;j++)sum[i][j] +=sum[i-1][j];
        }
    }

    ll q;cin>>q;
    for(int i=0;i<q;i++)
    {
        ll aa,b,c,d;
        cin>>aa>>b>>c>>d;
        aa--,b--,c--,d--;
        ll ans = sum[c][d];
        if(aa!=0)ans -= sum[aa-1][d];
        if(b!=0)ans -= sum[c][b-1];
        if(aa*b!=0) ans+=sum[aa-1][b-1];

        if(b!=0)
        for(int i=aa;i<=c;i++)
        {
            if(a[i][b]==1 &&a[i][b-1]==1)ans--;
        }

        if(aa!=0)
        {
            for(int i=b;i<=d;i++)
            {
                if(a[aa][i]==1 && a[aa-1][i]==1)ans--;
            }
        }

        cout<<ans<<endl;
    }
}
