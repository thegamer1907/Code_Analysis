#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb emplace_back
#define mp make_pair
#define mod 1000000007
#define mod1 998244353
#define ff first
#define ss second
#define fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> adj[30005];

bool DFS(int node,int t)
{
	if(node==t)
		return true;

	bool b=false;
	int s=adj[node].size();
	for(int i=0;i<s;i++)
	{
		b=b|DFS(adj[node][i],t);
	}

	return b;

}
int main()
{
	fast_io
	int n,t;
	cin>>n>>t;
	int temp;
	for(int i=1;i<n;i++)
	{
		cin>>temp;
		adj[i].pb(i+temp);
	}
		
	if(DFS(1,t))
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
    return 0;
 
}