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

vector<int> FAIL(string pat)
{

	int m = pat.size();
	vector<int> F(m + 1);
	int i = 0, j = -1;
	F[0] = -1;

	while (i < m)
	{
		while (j >= 0 && pat[i] != pat[j])
			j = F[j];
		i++, j++;
		F[i] = j;
	}

	return F;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string x;
	cin >> x;

	vi ret = FAIL(x);

	int c = sz(ret) - 1;
	mapii mp;
	while(ret[c])
		mp[ret[c]]++, c = ret[c];

	int mx = -1;

	rep(i, 0, sz(x))
	{
		if (mp[ret[i]])
			mx = max(mx, ret[i]);
	}

	if (mx == -1)
		cout << "Just a legend";
	else
		cout << x.substr(0, mx);

	return 0;
}
