#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <unordered_map>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair <int, int> pii;
typedef pair<ll, ll> pll;
#define rep(i,a,n) for(i=a;i<=n;i++)
#define per(i,n,a) for(i=n;i>=a;i--)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define llmax numeric_limits<ll>::max()
#define llmin numeric_limits<ll>::min()
ll powmod(ll a,ll b) {ll res=1;if(a>=MOD)a%=MOD;for(;b;b>>=1){if(b&1)res=res*a;if(res>=MOD)res%=MOD;a=a*a;if(a>=MOD)a%=MOD;}return res;}
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
/****************CODE STARTS HERE*******************/
ll n,m,k;
ll f(ll x)
{
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		ans+=min(m,(x-1)/i);
	}
	return ans;
}
int main()
{
    cin>>n>>m>>k;
    ll left=1,right=n*m;
    while(1)
    {
    	//cout<<left<<" "<<right<<endl;
    	ll mid=left+(right-left)/2;
    	ll cnt=f(mid);
    	ll cnt_n=f(mid+1);
    	//cout<<mid<<endl;
    	//cout<<cnt<<" "<<cnt_n<<endl;
    	if(cnt<k && cnt_n>=k)
    	{
    		cout<<mid<<endl;
    		return 0;
    	}
    	else if(cnt>=k)
    	{
    		//shift left
    		right=mid-1;
    	}
    	else if(cnt_n<k)
    	{
    		//shift right
    		left=mid+1;
    	}
    }
    //cout<<1<<endl;
    return 0;
}