#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;
int n;
int ar[50][50];
int dp[51][51];
bool leaf[50];
vector<int> adj[50];
vector<int> leafs;
int bad;
vector<int> pos;
int go(int rem, int now){
    if(rem==0){
        return 0;
    }
    if(dp[rem][now]!=-1){
        return dp[rem][now];
    }
    int low = 0;
    int high = 125000;
    while(low<high){
        int mid = (low+high+1)/2;
        int temp = rem;
        for(int i = 0; i<n; i++){
            if(!leaf[i] || i==now){
                continue;
            }
            int cur = 0;
            while(temp>0 && ar[now][i]+go(rem-cur-1,i)>=mid){
                cur++;
                temp--;
            }
        }
        if(temp==0){
            low = mid;
        }
        else{
            high = mid-1;
        }
    }
    dp[rem][now] = low;
    return low;
}
void dfs(int now, int from){
    if(leaf[now]){
        leafs.push_back(now);
    }
    for(int i = 0; i<pos.size(); i++){
        if(now==pos[i]){
            bad++;
        }
    }
    for(int i = 0; i<adj[now].size(); i++){
        int to = adj[now][i];
        if(to!=from){
            dfs(to,now);
        }
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                ar[i][j] = 0;
            }
            else{
                ar[i][j] = 25500000;
            }
        }
    }
    int maxw = 0;
    for(int i = 1; i<n; i++){
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        ar[a][b]=w;
        ar[b][a]=w;
        maxw = max(maxw,w);
    }
    assert(maxw<=50);
    for(int k = 0; k<n; k++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                ar[i][j] = min(ar[i][j],ar[i][k]+ar[k][j]);
            }
        }
    }
    for(int i = 0; i<=50; i++){
        for(int j = 0; j<=50; j++){
            dp[i][j] = -1;
        }
    }
    for(int i = 0; i<n; i++){
        leaf[i] = adj[i].size()==1;
    }
    //stuff
    int start, m;
    cin >> start >> m;
    start--;
    for(int i = 0; i<m; i++){
        int x;
        cin >> x;
        x--;
        pos.push_back(x);
    }
    
    int ans = 125000;
    if(n==1){
        assert(false);
        ans = 0;
    }
    for(int i = 0; i<adj[start].size(); i++){
        leafs.clear();
        leafs.resize(0);
        bad = 0;
        dfs(adj[start][i],start);
        if(bad==0){
            continue;
        }
        //stuff
        int low = 0;
        int high = ans+2;
        while(low<high){
            int mid = (low+high+1)/2;
            int temp = bad;
            for(int z = 0; z<leafs.size(); z++){
                int cl = leafs[z];
                if(cl==start){
                    continue;
                }
                int cur = 0;
                while(temp>0 && ar[start][cl]+go(m-cur-1,cl)>=mid){
                    cur++;
                    temp--;
                }
            }
            if(temp==0){
                low = mid;
            }
            else{
                high = mid-1;
            }
        }
        ans = min(ans,low);
    }
    assert(ans!=125000 && ans!=0);
    cout << ans << endl;
    return 0;
}