#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;

#define erep(i, x, n) for (auto i = x; i<=(ll)(n); i++)
#define rep(i, x, n) for(auto i = x; i<(ll)(n); i++)
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define mod(n, m) (((n%m) + m)%m)
#define reset(n, m) memset(n, m, sizeof n)
#define endl '\n'

const int N = 1e5 + 5;

ll n, m, k;
ll arr[N];
ll accum;

bool inside(ll a, ll b, ll c)
{
	return (a <= b && b <= c);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;

	rep(i, 0, m)
		cin >> arr[i];

	ll page = 1, res = 0;
	int idx = 0;
	while (idx < m)
	{
		ll r = page * k, l = r - k + 1ll;

		// outside
		if (!inside(l, arr[idx] - accum, r))
		{
//			cout << "here: " << page << endl;
			page = (arr[idx] - accum + k - 1ll) / k;
		}
		else
		{
			res++;
			ll need = 0;
			while (idx < m && inside(l, arr[idx] - accum, r))
			{
				need++;
				idx++;
			}
			accum += need;
		}
//		cout << idx << " " << res << " " << accum << endl;
	}

	cout << res << endl;
	return 0;
}