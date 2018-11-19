#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define pii pair<int, int>
#define vii vector<pii>
#define vs vector<string>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define vvi vector< vector<int> >
#define vvii vector< vector< pii > >
#define ld long double
#define mapii map<int, int>
#define mapsi map<string, int>
#define erep(i, x, n) for (auto i = x; i<=(ll)(n); i++)
#define rep(i, x, n) for(auto i = x; i<(ll)(n); i++)
#define INF  LLONG_MAX
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define pie  acos(-1)
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

	string x;
	cin >> x;

	int n;
	cin >> n;

	vs vec;

	rep(i, 0, n)
	{
		string y;
		cin >> y;
		vec.push_back(y);
		y+=y;
		vec.push_back(y);
	}

	rep(i, 0, sz(vec))
	{
		rep(j, 0, sz(vec))
		{
			if (i == j) continue;

			string y = vec[i];
			y += vec[j];

			rep(k, 0, sz(y) - 1)
			{
				if (y[k] == x[0] && y[k+1] == x[1])
				{
					cout << "YES";
					return 0;
				}
			}
		}
	}

	cout << "NO";
	return 0;
}
