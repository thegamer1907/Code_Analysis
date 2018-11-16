#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>

const int N = 10000+1;
int col[N] = {0};
int dp[N] = {0};
vector<int> graph[N];

int dfs(int node, int pa)
{
    dp[node] = 1;
    for(int i=0; i<graph[node].size(); i++)
    {
        int u = graph[node][i];
        if(u==pa)
            continue;
        dp[node] += dfs(u,node);
    }
    int cnt = 0;
    for(int i=0; i<graph[node].size(); i++)
    {
        int u = graph[node][i];
        if(u==pa)
            continue;
        if(col[u]==col[node])
            cnt++;
    }
    //cout<<node<<" "<<dp[node]<<" "<<cnt<<endl;
    dp[node] = dp[node] - cnt;
    return dp[node];
}

int main(void)
{
    int n; cin>>n;

    for(int i=2; i<=n; i++)
    {
        int x; cin>>x;
        graph[x].pb(i);
        graph[i].pb(x);
    }
    for(int i=1; i<=n; i++)
        cin>>col[i];

    int ans = dfs(1,-1);
    cout<<ans<<endl;
	return 0;
}
