#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdint.h>
#include<cmath>

using namespace std;

#define pb push_back
#define ll long long int
#define mp make_pair                       

#define ms(a,b) memset(a,b,sizeof a)
#define MOD 1000000007
#define N 1000003
#define rep(i,a,n) for (int i=a;i<n;i++)

void edge(vector<int> adj[], int a, int b)
{
	adj[a].pb(b);
}

bool dfs(vector<int> adj[], int curr,  int target)
{
	if(curr==target)
		return true;
	for(auto i: adj[curr])
		if(dfs(adj, i, target))
			return true;
	return false;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> adj[n+1];
    rep(i,0,n-1)
    {
    	int x;
    	cin >> x;
    	edge(adj,i+1, i+1+x);
    }
    if(dfs(adj,1,p)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}