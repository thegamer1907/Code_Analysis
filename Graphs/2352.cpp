#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define MOD 1000000007
#define MOD2 1000000009
#define bas 29
#define bas2 19
using namespace std;
const int len = 1e5 + 9;
int n;
vector<vector<int> >  g(len, vector<int>());
bool vis[len];
int dfs(int node){
    int res = 0;
    for(int i = 0; i < g[node].size(); i++){
        vis[g[node][i]] = true;
        res = max(res, dfs(g[node][i]));
    }
    return res + 1;
}
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x;

        scanf("%d", &x);
        if(x == -1)continue;
        g[x].push_back(i + 1);
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            vis[i] = true;
            res = max(res, dfs(i));
        }
    }
    printf("%d", res);
}
