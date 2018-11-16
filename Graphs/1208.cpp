#include<bits/stdc++.h>
using namespace std;

const int N = 3e4+10;
int arr[N];
bool visited[N];
vector<int> adjList[N];
bool found;

void dfs(int now, int finish) {
    visited[now] = 1;

    if(now == finish) found = true;

    int sz = adjList[now].size();
    for(int i = 0; i < sz; i++) {
        int next = adjList[now][i];
        if(!visited[next] && !found) dfs(next, finish);
    }
}

int main(){
    int n, t;

    cin >> n >> t;

    int dist;
    for(int i = 1; i <= n-1; i++) {
        cin >> dist;

        adjList[i].push_back(i + dist);
    }

    dfs(1, t);

    if(found) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
