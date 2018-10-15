#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); }
#define pb push_back
#define ll long long
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
using namespace std;
const int tinf = (int)1e9 + 7;
const ll inf = (ll)1e18 + 7;
const int N = 4e5 + 5;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	IOS
	ll n;
	string s[500001];
	cin >> n;
	vector < vector < char > > ans(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < s[n - 1].length(); i++)
		ans[n - 1].pb(s[n - 1][i]);
	for (int i = n - 2; i >= 0; i--)
	{
		if (s[i + 1] == "#" || s[i][1] > ans[i + 1][1])
		{
			s[i] = "#";
			ans[i].pb('#');
			continue;
		}
		if (ans[i + 1].size() > 1 && s[i][1] < ans[i + 1][1])
		{
			for (int j = 0; j < s[i].length(); j++)
				ans[i].pb(s[i][j]);
			continue;
		}
		ll l = 0;
		while (l < s[i].length() && l < ans[i + 1].size() && s[i][l] == ans[i + 1][l]) ans[i].pb(s[i][l]), l++;
		if (s[i].length() - 1 >= l && ans[i + 1].size() - 1 >= l && s[i][l] < ans[i + 1][l])
		{
			for (int j = l; j < s[i].length(); j++)
				ans[i].pb(s[i][j]);
			continue;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < ans[i].size(); j++)
			cout << ans[i][j];
		cout << endl;
	}


}
