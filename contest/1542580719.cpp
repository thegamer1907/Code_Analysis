#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7, N = 51;
int dist[N][N], criminals[N];
int dp[N][N]; //position, criminals left
vector<int> adj[N],distances[N];
vector<int> subtree(int u, int p){
    vector<int> ans(1,u);
    for(int v : adj[u]){
        if(v != p){
            auto sub = subtree(v,u);
            ans.insert(ans.end(),sub.begin(),sub.end());
        }
    }
    return ans;
}
int s,m;
int ans = MOD;
bool leaf[N];
void dfs(int u, int p){
    auto subs = subtree(u,p);
    int cnt = 0;
    for(int v : subs)
        cnt += criminals[v];
    if(cnt == 0)
        return;
    //cout << cnt << ' ' << m << '\n';
    int lo = 0, hi = MOD, mid;
    while(lo < hi){
        int mid = (lo+hi+1)/2;
        int criminals_placed = 0;
        for(int j : subs)
            if(leaf[j])
                for(int t = 1; t <= cnt; ++t)
                    if(dist[s][j] + dp[j][m-t] >= mid){
                        criminals_placed++;
                        if(criminals_placed >= cnt)
                            break;
                    }
        if(criminals_placed >= cnt)
            lo = mid;
        else
            hi = mid-1;
    }
    ans = min(ans,lo);
}
int main(){
    memset(dp,0x3f,sizeof(dp));
    int n;
    cin >> n;
    memset(dist,0x3f,sizeof(dist));
    for(int k = 1; k <= n; ++k)
        dist[k][k] = 0;
    for(int i = 0; i < n-1; ++i){
        int a,b,c;
        cin >> a >> b >> c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        dist[a][b] = dist[b][a] = c;
    }
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                dist[i][j] = min(dist[i][k] + dist[k][j],dist[i][j]);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            if(i != j)
                distances[i].push_back(dist[i][j]);
        sort(distances[i].rbegin(),distances[i].rend());
    }
    for(int i = 1; i <= n; ++i)
        leaf[i] = adj[i].size() == 1;
    cin >> s >> m;
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        criminals[x]++;
    }
    for(int i = 1; i <= n; ++i){
        dp[i][0] = 0;
    }
    for(int cnt = 1; cnt < m; ++cnt){
        for(int i = 1; i <= n; ++i){
            int lo = 0, hi = MOD, mid;
            while(lo < hi){
                int mid = (lo+hi+1)/2;
                int criminals_placed = 0;
                for(int j = 1; j <= n; ++j)
                    if(j != i && leaf[j])
                        for(int t = 1; t <= cnt; ++t)
                            if(dist[i][j] + dp[j][cnt-t] >= mid){
                                criminals_placed++;
                                //cout << "placed: " << i << ' ' << j << ' ' << t << '\n';
                                if(criminals_placed >= cnt)
                                    break;
                            }
                if(criminals_placed >= cnt)
                    lo = mid;
                else
                    hi = mid-1;
            }
            dp[i][cnt] = lo;
            //cout << i << ' ' << cnt << ' ' << dp[i][cnt] << '\n';
        }
    }
    for(int u : adj[s])
        dfs(u,s);
    cout << ans << '\n';
}
