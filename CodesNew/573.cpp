#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e7+100;
const int INF=699999999;
int n,m;
int dp[maxn];
int vis[maxn];
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return a*b /gcd(a,b);
}
void read()
{
    cin>>n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        vis[x]++;
    }
}
void init()
{
    dp[1]=dp[0]=0;
    for(int i=2; i<maxn; i++)
    {
        if(dp[i]!=-1)
        {
            dp[i]=vis[i];
            for(int j=i+i; j<maxn; j=j+i)
            {
                dp[i]+=vis[j];
                dp[j]=-1;
            }

        }
    }
    for(int i=2; i<maxn; i++)
    {
        if(dp[i]==-1)
            dp[i]=0;
            dp[i]=dp[i-1]+dp[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    read();
    init();
//    for(int i=2;i<20;i++)
//        cout<<dp[i]<<" ";
//    cout<<endl;
    cin>>m;
    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        if(r<l)
            cout<<0<<endl;
        else
        {
            if(r>maxn)
                r=maxn-100;
            if(l>maxn)
                l=maxn-100;
            cout<<dp[r]-dp[l-1]<<endl;
        }

    }
    return 0;

}

