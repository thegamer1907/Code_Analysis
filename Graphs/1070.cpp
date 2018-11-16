//
//  judge.cpp
//  codeforces
//
//  Created by laith on 8/21/18.
//  Copyright © 2018 Admin. All rights reserved.
//
#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<memory>
#include<memory.h>
#include<map>
#include<stdlib.h>
#include<queue>
#include<math.h>
#include<algorithm>
#include<bitset>
typedef long long ll;
using namespace std;


vector< vector<int> > adj;
vector<bool> visited;


//void dfs(int u) {
//    visited[u] = true;
//    for(int i = 0; i < adj[u].size(); i++) {
//        if (!visited[adj[u][i]]) {
//            dfs(adj[u][i]);
//        }
//    }
//}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        visited[node] = true;
        for (int i = 0; i < adj[node].size(); i++) {
            if (!visited[adj[node][i]]) {
                q.push(adj[node][i]);
            }
        }
    }
}

int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    for (int i = 1; i < n; i++) {
        int temp; scanf("%d", &temp);
        adj[i].push_back(temp + i);
    }
    
    bfs(1);
    visited[t] ? puts("YES") : puts("NO");
    
    
}

