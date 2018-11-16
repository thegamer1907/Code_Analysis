#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;

	vector<int> G[n+1];

	for(int i=1;i<n;i++)
	{
		int a;
		cin>>a;
		G[i].push_back(a+i);
	}
	//for(int i=1;i<n;i++) cout<<i<<":"<<G[i][0]<<endl;
	G[n].clear();

	bool visited[n+1]={0};
	stack<int> S;

	S.push(1);
	visited[1]=true;
	while(S.size()!=0)
	{
		int v=S.top();
		S.pop();
		//cout<<v<<endl;
		if(v==n) break;
		if(visited[G[v][0]]==false)
		{
			S.push(G[v][0]);
			visited[G[v][0]]=true;
		}
	}

	if(visited[t]==true) cout<<endl<<"YES";
	else cout<<endl<<"NO";


	return 0;
}
