#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define INF 2000000000
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define pb push_back
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it=(c).begin();it!=(c).end();it++)
#define TRvii(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
#define TRmsi(c,it) for(msi::iterator it=(c).begin();it!=(c).end();it++)
 
 
using namespace std;

vector<int>adj[10001];
int ct=0;
int clr[10001];
bool visited[10001];

void dfs(int node)
{
	visited[node]=true;
	REP(i,0,adj[node].size()-1)
	{
		if(!visited[adj[node][i]])
		{
			if(clr[node]!=clr[adj[node][i]])
				ct++;
			dfs(adj[node][i]);
		}
	}
}
int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
   	int n;
   	cin >> n;
   	REP(i,2,n)
   	{
   		int a;
   		cin >> a;
   		adj[i].pb(a);
   		adj[a].pb(i);
   	}
   	REP(i,1,n)
   		cin >> clr[i];
   	dfs(1);
   	cout << ct+1;
}