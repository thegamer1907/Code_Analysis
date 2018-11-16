#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int> > adjList(2003);
bool visited[2003];
int mxLv = 0;

void dfs(int node, int lv) {
    visited[node] = 1;
    mxLv = max(mxLv, lv);
    for(int i = 0; i < (int)adjList[node].size(); i++) {
        if(!visited[adjList[node][i]]) {
            dfs(adjList[node][i], lv+1);
        }
    }
}

int main() {
    vector<int> roots;
    int n, a;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a == -1) {
            roots.push_back(i);
        } else {
            adjList[a].push_back(i);
        }
    }

    for(int i = 0; i < (int)roots.size(); i++) {
        dfs(roots[i], 0);
    }

    cout << mxLv+1 << endl;
}
