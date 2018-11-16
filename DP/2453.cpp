#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
const int maxn=1e5+100;
const int mod=1e9+7;
int t, k;
ll dp[maxn], pref[maxn];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin>>t>>k;
    dp[0]=1;
    for(int i=1; i<maxn; i++)
    {
        dp[i]=dp[i-1];
        if(i>=k)dp[i]+=dp[i-k];
        dp[i]%=mod;
        pref[i]=pref[i-1]+dp[i];
        pref[i]%=mod;
    }
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<(pref[b]-pref[a-1]+mod)%mod<<"\n";
    }
}