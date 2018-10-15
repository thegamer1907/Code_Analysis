#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007LL
#define eps 1e-13
#define PI 3.141592653589793238L
#define INF 1000000011
#define INFLL 1000000000000000011LL
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define mp make_pair
#define F first
#define S second
#define pb(x) push_back(x)
#define fo(i,a,n) for(i = (a); i < (n); i++)
#define gtl(x) getline(cin, (x))
#define flsh fflush(stdout)
#define sws ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define gcd __gcd
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)((a).size())
#define io_file freopen("D:/Coding Problems/Contest/input_file.in", "r", stdin); freopen("D:/Coding Problems/Contest/output_file.out", "w", stdout)

ll modx(ll Base, ll exponent)
{
	ll ans = 1;
	if(Base == 1)
		return Base;
	while(exponent)
	{
		if(exponent & 1)
			ans = (ans * Base)%mod;
		Base = (Base * Base)%mod;
		exponent = exponent >> 1;
	}
	return ans;
}

ll inmodx(ll num)
{
	return (modx(num, mod-2LL));
}

bool cmp(pll a, pll b)//true for a before b
{
	return ((a.S*b.F) <= (b.S*a.F));
}

const int N = (2e5) + 9;
const int M = (N<<2) + 9;
const int LOGN = ((int)log2(N)) + 3;
const int LOGM = ((int)log2(M)) + 3;
const int BUCK = 650;

ll a[N], sum[N];

int binsea(int l, int r, ll val)
{
	if(l > r)
		return 0;
	int mid = (l+r)>>1;
	if(sum[mid] <= val)
		return max(mid, binsea(mid+1,r,val));
	return binsea(l,mid-1,val);
}

void solve()
{
	int n, q, i, ans;
	ll val, x;
	cin >> n >> q;
	fo(i,1,n+1)
	{
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}
	val = 0LL;
	while(q--)
	{
		cin >> x;
		val += x;
		ans = binsea(0,n,val);
		if(ans == n)
		{
			ans = 0;
			val = 0LL;
		}
		cout << (n-ans) << '\n';
	}
	return;
}

int main()
{
	sws;
	// clock_t clk;
	// clk = clock();
	// io_file;
	// srand (time(NULL));

	//Code here
	
	int t = 1, cs;
	// cout << fixed << setprecision(9);
	// cin >> t;
	fo(cs,1,t+1)
	{
		// cout << "Case #" << cs << ": ";
		solve();
	}

	// Code ends here

	// clk = clock() - clk;
	// cerr << fixed << setprecision(6) << "Time: " << ((double)clk)/CLOCKS_PER_SEC << "\n";
	return 0;
}