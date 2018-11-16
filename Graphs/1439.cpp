#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
 
#define ll long long
#define vll vector<long long>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define LOOP(n) for(int i=0; i<n; ++i)  
 
using namespace std;

int main()
{
	int n,t; 
	cin>>n>>t;
	int a[100000];
	for(int i=0; i<n-1; ++i)
	{
		cin>>a[i+1];
	}
	vector<int> adj[n+1];
	for(int i=1; i<n; ++i)
	{
		adj[i].pb(i+a[i]);
	}
	queue<int> q;
	vector<bool> visited;
	visited.resize(n+1);
	for(int i=0; i<=n; ++i)
	{
	    visited[i] = false;
	}
	q.push(1);
	visited[1] = true;
	bool flag = false;
	while(!q.empty())
	{
		int f = q.front();
		//cout<<f<<' ';
		if(f == t)
		{
			flag = true;
			break;
		}
		q.pop();
		for(int i=0; i<adj[f].size(); ++i)
		{
			if(visited[adj[f][i]] == false)
				{
					q.push(adj[f][i]);
					visited[adj[f][i]] = true;
				}
		}
	}
	if(flag)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}