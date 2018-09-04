#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vvi;
typedef vector<pii> vii;
typedef vector<vector<pii> > vvii;
typedef long double ld;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;

#define erep(i, x, n) for (auto i = x; i<=(ll)(n); i++)
#define rep(i, x, n) for(auto i = x; i<(ll)(n); i++)
#define INF  LLONG_MAX
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define pi  acos(-1)
#define mod(n,m) ((n % m + m) % m)
#define eps (1e-8)
#define reset(n, m) memset(n, m, sizeof n)
#define endl '\n'
#define output freopen("output.txt", "w", stdout)
#define mp(x, y, z) {x, {y, z}}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, m, k;

	cin >> n >> m >> k;

	ll st = 0, en = n*m, mid, ret = -1;

	while(st <= en)
	{
		mid = (st+en)/2;
		ll j = m, sum = 0;
		erep(i, 1, n)
		{
			while(i*j > mid)
				j--;
			sum += j;
		}

		if (sum >= k)
			en = mid - 1, ret = mid;
		else
			st = mid + 1;
	}
	cout << ret << endl;

	return 0;
}
