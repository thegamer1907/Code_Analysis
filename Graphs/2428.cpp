#include<bits/stdc++.h>

using namespace std;

const long long N=2e3+5,
        INF=1e9+7;

int ans, c, n;
vector<int>a[N];
void dfs(int v, int pr=-1, int k=1)
{
    ans=max(ans, k);
    for (int i=0; i<a[v].size(); ++i){
        int to=a[v][i];

        if (to==pr) continue;
        dfs(to, v, k+1);
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for (int i=1; i<=n; ++i){
        int x;

        cin>>x;
        if (x!=-1) a[x].push_back(i);
    }
    for (int i=1; i<=n; ++i){
        dfs(i);
    }
    cout<<ans;
}
