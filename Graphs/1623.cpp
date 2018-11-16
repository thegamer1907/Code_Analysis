#include <bits/stdc++.h>
using namespace std;


vector <int> adj[30004];
bool vis[30004];
 

void dfs(int t)
{
	vis[1] = false;
	vector<int> s;
	s.push_back(1);

	while (!s.empty())
	{
		int val = s.front();
		s.pop_back();
        

		for (int i = 0; i < adj[val].size(); i++)
		{
			if (vis[adj[val][i]] == false)
			{
				vis[adj[val][i]] = true;
				s.push_back(adj[val][i]);
				if (adj[val][i] == t)
					return;
			}
		}
	}
}
int main()
{   
	int n, t; 
	cin >> n >> t;
	int a;
	for (int i = 1; i <= n - 1;i++)
	{
		cin >> a;
		adj[i].push_back(a + i);
	}

	if (t==1)
		cout << "YES" << endl;

	dfs(t);

	if (vis[t])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}