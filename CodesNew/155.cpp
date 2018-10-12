#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define INF 1000000007
#define mem(dp,a) memset(dp,a,sizeof dp)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repb(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for (ll i=0;i<n;i++)

int main()
{
    ll n,k;
    cin>>n>>k;
    cout<<ll(log2(k&(-k))+1)<<endl;
}
