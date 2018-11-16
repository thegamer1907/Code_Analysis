#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 2222;
int n;
vector<int> gr[MAX_N];
int p;
int root[MAX_N];
int mx;
int cnt;

void add(int v,int u){
    gr[v].push_back(u);
}

void dfs(int v,int deep){
    mx = max(mx, deep);
    for(int i = 0; i < gr[v].size(); ++i){
        int to = gr[v][i];
        dfs(to, deep + 1);
    }
}

int main(){

    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> p;
        if(p == -1) root[++cnt] = i; else add(p, i);
    }
    for(int i = 1; i <= cnt; ++i)
    dfs(root[i], 1);
    cout << mx << '\n';

    return 0;
}
