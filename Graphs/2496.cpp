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
ll n, p[100000], c[100000], ans;
vvl d(N);
ll used[100000];
void dfs(int v, int color)
{
	if (c[v] != color) ans++;
	used[v] = 1;
	for (int i = 0; i < d[v].size(); i++)
		if (!used[d[v][i]]) dfs(d[v][i], c[v]);
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	IOS
    cin >> n;
    for (int i = 2; i <= n; i++)
	{
		cin >> p[i];
		d[i].pb(p[i]);
		d[p[i]].pb(i);
	}
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	dfs(1, 0);
	cout << ans;


}
