#include<bits/stdc++.h>
#define hell 1000000007
#define for(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;
vector<int> adj[10004];
bool v[10004];
int c[10004];
int ans=0;
void dfs(int i,int k)
{
    v[i]=1;
    if((c[i]!=k))
    {
        //cout<<i<<endl;
        ans++;
        k=c[i];
    }
    for(j,0,adj[i].size())
    {
        if(v[adj[i][j]]==0)
        {
            //cout<<adj[i][j];
            dfs(adj[i][j],k);
        }
    }

}
int main()
{
	int n;
	cin>>n;
	for(i,2,n+1)
    {
        int t;
        cin>>t;
        adj[t].pb(i);
    }
    for(i,1,n+1)
        cin>>c[i];
    int k=0;
    dfs(1,k);
    cout<<ans;
	return 0;
}
