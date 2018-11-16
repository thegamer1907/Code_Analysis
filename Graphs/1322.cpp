#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<int> tree[], int u, int v)
{
	tree[u].push_back(v);
}

int main()
{
	int n, t; cin>>n>>t;
	t--;
	vector<int> adj[n];

	for (int i = 0; i < n-1; i++)
	{
		int a; cin>>a;
		addedge(adj, i, i+a);
	}

	// bfs
	int discovered[n], flag=0;
	for (int i = 1; i<n;i++)
	{
		discovered[i] = 0;
	}
	discovered[0] = 1;

	vector<int> L;
	L.push_back(0);

	while (L.size() > 0)
	{
		vector<int> temp;
		for (int i = 0; i<L.size(); i++)
		{
			int k = adj[L[i]].size();
			for (int j = 0; j<k; j++)
			{
				int v = adj[L[i]][j];
				if (discovered[v]==0)
				{
					discovered[v] = 1;
					temp.push_back(v);
				}
				if (v==t)
				{
					flag=1;
					break;
				}
			}
			if (flag==1) 
			{
				break;
			}
		}
		if (flag==1) 
		{
			break;
		}

		L.clear();
		for (int i = 0; i<temp.size(); i++)
		{
			L.push_back(temp[i]);
		}
	}
	if (flag==1)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}