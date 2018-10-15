#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <ll , ll> pll;
typedef vector <ll> vll;
#define pb push_back
#define X first
#define Y second
#define mkp make_pair
#define pow2(i) (1LL << (i))
#define modi(a,b) ((a%b+b)%b)
#define smax(a,b) a=max(a,b)
#define smin(a,b) a=min(a,b)
#define IOS ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const ll maxn=2e5+5,M=21,bghs=1e9+7,inf=1e18;
ll dp[maxn],cnt[maxn],n,sum,ans=1;
int main()
{
	IOS;
	cin>>n;
	for (ll i=0;i<n;i++)	{ll x;cin>>x; smax(ans,x);sum+=x;}
	cout<<max(((sum-1)/(n-1))+1,ans)<<endl;
}
