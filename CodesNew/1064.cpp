using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define pb push_back
#define mp make_pair
#define ft first
#define sc second
#define bs binary_search
#define INF 1000000000
#define rc(s) return cout << s,0
const ll mod = 1e9 + 7;
ll n,s,a;
vi nums;
ll ans;
bool check(int x)
{
	ll cnt =0;
	ll sum=0;
	vll vals;
	for(int i = 0; i < n; i++)
	{
		vals.pb(nums[i]+1LL*(i+1)*x);
	}
	sort(vals.begin(),vals.end());
	for(int i = 0; i < x;i++)
	{
		sum += vals[i];
	}
	if(s-sum>=0){ans=sum;return 1;}
	else return 0;
}
int main()
{
	/**///------------------------///**/
	/**/ios::sync_with_stdio(false);/**/
	/**///------------------------///**/
	cin >> n >> s;
	for(int i=1;i<=n;i++)
	{
		cin >> a;
		nums.pb(a);
	}
	int l=1,r=n,mid;
	ll mx=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}	

	cout << l-1 << " " << ans << endl;
	//THIS IS THE END
}