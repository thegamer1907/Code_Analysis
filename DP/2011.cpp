#include <bits/stdc++.h>
using namespace std;
typedef long long   ll;
typedef bitset<15>mask;
ll n,x,y,z,a[1000000],k,sol,sum,MOD=1000000007,b[1000000],m,dp[1000000],f[1000000];
vector<ll>v;
pair<ll,ll>p[1000000];
map<ll,ll>ma;
string s1,s2,s;
int main()
{
//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i=n;i>0;i--)
    {
        if(f[a[i]]==0)
            dp[i]++;
            dp[i]+=dp[i+1];
            f[a[i]]=1;
    }
    for(int i=1;i<=m;i++)
       cout<<dp[b[i]]<<endl;


    return 0;
}
