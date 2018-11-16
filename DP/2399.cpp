#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define fill(a,x) memset(a,x,sizeof(a))
#define F first
#define S second
#define FOR(i,a,b) for(int i = a; i<=b; ++i)
#define NFOR(i,a,b) for(int i = a; i>=b; --i)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const ll INF = 1e18;
const int mod = 1e9+7;
const int N = 1e5 + 10;
#define GMAX 500
inline int add(int x,int y){
  x += y;
  if(x >= mod) x -= mod;
  return x;
}
inline int mul(int x,int y){
  x = (1LL * x * y) % mod;
  return x;
}
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;


int main()
{
	int n,k;
	cin>>n>>k;

	ll a[150005] = {0};
	ll sum[150005] =  {0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i] = sum[i-1] + a[i];
	}

	ll min = INF;
	ll min_index = INF;
	for(int i=1;i<=n-k+1;i++)
	{
		ll val = sum[i+k-1] - sum[i-1];

		if(min > val)
		{
			min = val;
			min_index = i;
		}
	}

	cout << min_index;
}