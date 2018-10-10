#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
#define fs first
#define se second
#define ll long long
#define pb push_back
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i >= l; i--)
#define mod       100000000
const int N = 500005;
int n,x;
ll s[N],dp[N],ans;
int main()
{
    //freopen("input.txt" , "r" , stdin);
    cin>>n;
    rep(i,1,n+1)scanf("%d",&x),s[i] = s[i-1]+x;
    if(s[n]%3 != 0 || n<3)
    {
        cout<<0;return 0;
    }
    repb(i,n-1,1)if(s[i]==(2*s[n])/3)dp[i] = dp[i+1]+1;
    else dp[i] = dp[i+1];
    rep(i,1,n-1)if(s[i] == s[n]/3)ans += dp[i+1];
    cout<<ans;
}
