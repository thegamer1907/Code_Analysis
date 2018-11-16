#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int ans;

const int N = 1e4 + 17;

vector <int> v[N];

int C[N];

void DFS(int nod, int color, int seen)
{
	if(C[nod] != color)
		ans++;
	for(int i = 0; i < v[nod].size(); i++)
		if(v[nod][i] != seen)
			DFS(v[nod][i], C[nod], nod);
}

main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		int x;
		cin >> x;
		v[x].pb(i);
		v[i].pb(x);
	}
	for(int i = 1; i <= n; i++)
		cin >> C[i];
	DFS(1, 0, 0);
	cout << ans;
}