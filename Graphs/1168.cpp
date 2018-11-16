#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> adj[30005];
int visited[30005];
int main()
{
	//Input
	int n,t;
	cin >> n >> t;
	int i,a;
	for(i=1;i<n;i++)
	{
		cin >> a;
		adj[i].push_back(i+a);
	}
	for(i=0;i<30005;i++)
		visited[i] = 0;
	
	adj[n].push_back(0);
	// DFS
	stack<int> S;
	S.push(1);
	while(!S.empty())
	{
		i = S.top();
		S.pop();
		if(i==t)
		{
			cout << "YES"<<endl;
			return 0;
		}
		else if(i==0)
		{
			cout << "NO" << endl;
			return 0;
		}
		if(!visited[i])
			visited[i] = 1;
		if(!visited[adj[i].front()])
				S.push(adj[i].front());
	}
	
}
