#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>g[20000];
int d[20000],k[200000],ans;
bool used[200000];

void dfs(int v,int n) {
    if (!k[n]) ans++;
    k[n]++;
    d[v] = n;
    used[v] = 1;
    for (int i = 0; i<g[v].size(); i++)
        dfs(g[v][i],n+1);
}

int main() {
    int n,t;
    cin>>n;
    for (int i = 0; i<n;i++) {
        cin>>t;
        if (t!=-1) g[t-1].push_back(i);
    }
    for (int i = 0; i<n; i++)
        if (!used[i]) dfs(i,0);
    cout<<ans;
    return 0;
}
