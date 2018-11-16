#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector<int>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define dbg(x)                       cerr << #x << " is " << x << endl;
#define endl                           '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll i,j,n,k;
    string s;
    cin>>s;
    n=s.length();
    ll dp[n+1][8];
    pair<ll,ll> prev[n+1][8];
    memset(dp,0,sizeof(dp));
    rep(i,0,n)
        rep(j,0,8)
            prev[i][j]=mp(-1,-1);
    dp[0][(s[0]-'0')%8]=1;
    prev[0][(s[0]-'0')%8]=mp(-1,1);
    if(dp[0][0]==1)
    {
        cout<<"YES"<<endl;
        ret(s[0])
    }
    rep(i,1,n)
    {
        dp[i][(s[i]-'0')%8]=1;
        prev[i][(s[i]-'0')%8]=mp(-1,1);
        rep(j,0,8)
        {
            if(dp[i-1][j]==1)
            {
                dp[i][(j*10+(s[i]-'0'))%8]=1;
                prev[i][(j*10+(s[i]-'0'))%8]=mp(j,1);
                dp[i][j]=1;
                prev[i][j]=mp(j,0);
            }
        }
        if(dp[i][0]==1)
        {
            cout<<"YES"<<endl;
            string o="";
            j=0;
            while(i>=0 && j>-1)
            {
                if(prev[i][j].S==1)
                    o+=s[i];
                j=prev[i][j].F;
                i--;
            }
            reverse(all(o));
            ret(o)
        }
    }
    ret("NO")
    return 0;
}
